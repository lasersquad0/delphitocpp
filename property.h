#ifndef __PROPERTY_H__
#define __PROPERTY_H__

#include <functional>

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
        setter_(value);
        return *this;
    }

    operator V () const { return getter_(); }
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
            parent.setter_(key, new_value);
            return *this;
        }

        operator V() const { return parent.getter_(key); }
    };

public:
    PropertyArray(getter_type getter, setter_type setter) : getter_(getter), setter_(setter) {}

    WriteProxy operator[](const K key)
    {
        return WriteProxy(*this, key);
    }

    const V operator[](const K key) const
    {
        return getter_(key);
    }
};

// This PropertyArray class is used for C++ implementation of Delphi properties of such type
// property Values[Key1: K1; Key2: K2]: V read GetValue write SetValue;
// OR
// property Values[Key1, Key2: K1]: V read GetValue write SetValue;
template<typename K1, typename K2, typename V>
class PropertyArray
{
private:
    using getter_type = std::function<V(K1,K2)>;
    using setter_type = std::function<void(K1,K2,V)>;
    getter_type getter_;
    setter_type setter_;

    // proxy class for setter
    class WriteProxy
    {
    private:
        PropertyArray& parent;
        K1 key1;
        K2 key2;
    public:
        WriteProxy(PropertyArray& p, const K1& k1, const K2& k2) : parent(p), key1(k1), key2(k2) {}

        WriteProxy& operator=(const V& new_value)
        {
            parent.setter_(key1, key2, new_value);
            return *this;
        }

        operator V() const { return parent.getter_(key); }
    };

public:
    PropertyArray(getter_type getter, setter_type setter) : getter_(getter), setter_(setter) {}

    WriteProxy operator[](const K1 key1, const K2 key2)
    {
        return WriteProxy(*this, key1, key2);
    }

    const V operator[](const K1 key1, const K2 key2) const
    {
        return getter_(key1, key2);
    }
};


#endif