#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <bits/stdc++.h>

using namespace std;

class Airplane {
    protected:
        string m_type;

    public:
        //コンストラクタ
        Airplane(const string& type);
        string getType();
        virtual void fly() = 0;
};

#endif //_AIRPLANE_H_