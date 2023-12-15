#include <bits/stdc++.h>
#include "calculation.hpp"

using namespace std;

int main(){
    Calculation c;
    c.setNumeber1(8);
    c.setNumber2(9);
    cout << c.getNumber1() << "+" << c.getNumber2() << "=" << c.add() << endl;
    cout << c.getNumber1() << "-" << c.getNumber2() << "=" << c.sub() << endl;
    return 0;
    }