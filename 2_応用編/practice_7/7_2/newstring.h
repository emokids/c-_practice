#ifndef _NEWSTRING_H_
#define _NEWSTRING_H_

#include <bits/stdc++.h>

using namespace std;

class Newstring{
    private:
        string m_value;

    public:
        Newstring();
        Newstring(string value);
        Newstring(Newstring& value);
        Newstring& operator = (Newstring& n);
        string getValue() const;
        bool operator == (const Newstring& other) const;
};

#endif //_NEWSTRING_H_