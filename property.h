#ifndef __PROPERTY_H__
#define __PROPERTY_H__

#include <functional>

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

    operator V() const { return getter_(); }
};


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

#endif