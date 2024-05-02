#include "NewString.h"
 
Newstring::Newstring()
{
    m_value = "";
}

Newstring::Newstring(string value)
{
    m_value = value;
}

Newstring::Newstring(Newstring& value)
{
    m_value = value.getValue();
}

Newstring& Newstring::operator= (Newstring& n)
{
    m_value = n.getValue();
    return *this;
}

string Newstring::getValue() const
{
    return m_value;
}

bool Newstring::operator==(const Newstring& other) const
{
    string thisValue = m_value;
    string otherValue = other.getValue();
    transform(thisValue.begin(), thisValue.end(), thisValue.begin(), ::toupper);
    transform(otherValue.begin(), otherValue.end(), otherValue.begin(), ::toupper);
    return thisValue == otherValue;
}