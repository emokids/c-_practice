#include <bits/stdc++.h>
#include "minmax.hpp"

using namespace std;

int main(){
    Minmax m;
    int a = 4;
    int b = 2;
    int c = 7;
    cout << a << "," << b << "," << c << "の内最大のものは" << m.max(a,b,c) << endl;
    cout << a << "," << b << "," << c << "の内最小のものは" << m.min(a,b,c) << endl;
    return 0;
}