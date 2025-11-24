#ifndef __PROPERTY_H__
#define __PROPERTY_H__

#include <functional>
#include <stdexcept>

class NoGetterSetterError : public std::invalid_argument
{
public:
    NoGetterSetterError(const char* message) : invalid_argument(message) {}

};

// This class is used for C++ implementation of Delphi properties of such type
// property PropRec : TRec read FRec write SetRec;
template<typename V>
class Property {
private:
    using getter_type = std::function<V()>;
    using setter_type = std::function<void(V)>;

    getter_type getter_;
    setter_type setter_;

public:
    Property(getter_type getter, setter_type setter) : getter_(getter), setter_(setter) {}

    Property& operator=(const V& value)
    {
        if (setter_)
            setter_(value);
        else
            throw NoGetterSetterError("Property is read only.");

        return *this;
    }

    operator V () const 
    {
       if(!getter_)
           throw NoGetterSetterError("Property cannot be read.");

        return getter_(); 
    }
};

// This PropertyArray class is used for C++ implementation of Delphi properties of such type
// property Values[Key: K]: V read GetValue write SetValue;
template<typename K, typename V>
class PropertyArray
{
private:
    using getter_type = std::function<V(K)>;
    using setter_type = std::function<void(K, V)>;
    getter_type getter_;
    setter_type setter_;

    // proxy class for setter
    class WriteProxy
    {
    private:
        PropertyArray& parent;
        K key;
    public:
        WriteProxy(PropertyArray& p, const K& k) : parent(p), key(k) {}

        WriteProxy& operator=(const V& new_value)
        {
            if (!parent.setter_)
                throw NoGetterSetterError("Property is read only.");

            parent.setter_(key, new_value);
            return *this;
        }

        operator V() const 
        {
            if (!parent.getter_)
                throw NoGetterSetterError("Property cannot be read.");

            return parent.getter_(key); 
        }
    };

public:
    PropertyArray(getter_type getter, setter_type setter) : getter_(getter), setter_(setter) {}

    WriteProxy operator[](const K key)
    {
        return WriteProxy(*this, key);
    }

    const V operator[](const K key) const
    {
        if (!getter_)
            throw NoGetterSetterError("Property cannot be read.");

        return getter_(key);
    }
};

// This PropertyArray class is used for C++ implementation of Delphi properties of such type
// property Values[Key1: K1; Key2: K2]: V read GetValue write SetValue;
// OR
// property Values[Key1, Key2: K1]: V read GetValue write SetValue;
template<typename K1, typename K2, typename V>
class PropertyArray2
{
private:
    using getter_type = std::function<V(K1,K2)>;
    using setter_type = std::function<void(K1,K2,V)>;
    using index_type = std::pair<K1, K2>;

    getter_type getter_;
    setter_type setter_;

    // proxy class for setter
    class WriteProxy
    {
    private:
        PropertyArray2& parent;
        index_type keys;
    public:
        WriteProxy(PropertyArray2& p, const index_type& ikeys) : parent(p), keys(ikeys) {}

        WriteProxy& operator=(const V& new_value)
        {
            if (!parent.setter_)
                throw NoGetterSetterError("Property is read only.");

            parent.setter_(keys.first, keys.second, new_value);
            return *this;
        }

        operator V() const 
        {
            if (!parent.getter_)
                throw NoGetterSetterError("Property cannot be read.");

            return parent.getter_(keys.first, keys.second); 
        }
    };

public:
    PropertyArray2(getter_type getter, setter_type setter) : getter_(getter), setter_(setter) {}

    WriteProxy operator[](const index_type& ikeys)
    {
        return WriteProxy(*this, ikeys);
    }

    const V operator[](const index_type& ikeys) const
    {
        if (!getter_)
            throw NoGetterSetterError("Property cannot be read.");

        return getter_(ikeys.first, ikeys.second);
    }
};

// This PropertyArray class is used for C++ implementation of Delphi properties of such type
// property Values[Key1:K1; Key2: K2; Key3: K3]: V read GetValue write SetValue;
// OR
// property Values[Key1, Key2, Key3: K1]: V read GetValue write SetValue;
template<typename K1, typename K2, typename K3, typename V>
class PropertyArray3
{
private:
    using getter_type = std::function<V(K1, K2, K3)>;
    using setter_type = std::function<void(K1, K2, K3, V)>;
    using index_type = std::tuple<K1, K2, K3>;

    getter_type getter_;
    setter_type setter_;

    // proxy class for setter
    class WriteProxy
    {
    private:
        PropertyArray3& parent;
        index_type keys;
    public:
        WriteProxy(PropertyArray3& p, const index_type& ikeys) : parent(p), keys(ikeys) {}

        WriteProxy& operator=(const V& new_value)
        {
            if (!parent.setter_)
                throw NoGetterSetterError("Property is read only.");

            parent.setter_(std::get<0>(keys), std::get<1>(keys), std::get<2>(keys), new_value);
            return *this;
        }

        operator V() const
        {
            if (!parent.getter_)
                throw NoGetterSetterError("Property cannot be read.");

            return parent.getter_(std::get<0>(keys), std::get<1>(keys), std::get<2>(keys));
        }
    };

public:
    PropertyArray3(getter_type getter, setter_type setter) : getter_(getter), setter_(setter) {}

    WriteProxy operator[](const index_type& ikeys)
    {
        return WriteProxy(*this, ikeys);
    }

    const V operator[](const index_type& ikeys) const
    {
        if (!getter_)
            throw NoGetterSetterError("Property cannot be read.");

        return getter_(std::get<0>(ikeys), std::get<1>(ikeys), std::get<2>(ikeys));
    }
};


#endif