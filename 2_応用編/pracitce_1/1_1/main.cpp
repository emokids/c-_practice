#include <bits/stdc++.h>

using namespace std;

void plus_3(int&);

int main(){
    int a = 7;
    int &n = a;
    cout << "a= " << a << endl;
    plus_3(n);
    cout << "a= " << n << endl;
    return 0;
}

void plus_3(int& n){
    n += 3;
}