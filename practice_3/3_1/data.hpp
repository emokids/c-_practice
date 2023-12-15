#ifndef _DATA_HPP_
#define _DATA_HPP_

#include <bits/stdc++.h>

using namespace std;

class CData{
    private:
    // メンバ変数number
    int number;
    // メンバ変数comment
    string comment;

    public:
    void init();
    void setnumber(int m_num);
    void setcomment(string m_commnet);
    int getnumber();
    string getcommnet();
};

#endif // _DATA_HPP_
