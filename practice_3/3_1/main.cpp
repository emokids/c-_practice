#include <bits/stdc++.h>
#include "data.hpp"

using namespace std;

int main(){
    CData d;
    d.init();
    d.setnumber(100);
    d.setcomment("Programming C++");
    cout  << "number = " << d.getnumber() << "commnet = " << d.getcommnet() << endl;
}