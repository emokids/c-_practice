#include <bits/stdc++.h>
#include "function.hpp"

using namespace std;

Function::Function() : digits(10, vector<int>(0)){
}

void Function :: createVector(){
    int num;
    // コンソールから入力された数値を配列に格納
    while(true){
        cout << "正の整数を入力：";
        cin >> num;
        if (num == -1){
            break;
        }
        int lastDigit = num % 10;
        digits[lastDigit].push_back(num);
    }
}

void Function :: displayResults(){
    for (int i = 0; i<=9; ++i){
        cout << "一の位が" << i << ":";
        if (digits[i].empty()){
            cout << "なし" << endl;
        }
        else{
            for (int j : digits[i]){
                cout << j << " ";
            }
            cout << endl;
        }

    }
}

