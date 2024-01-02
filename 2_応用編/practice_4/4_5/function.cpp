#include <bits/stdc++.h>
#include "function.hpp"

using namespace std;

Function::Function() : numbers(){
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
        if (num != 2){
            numbers.push_back(num);
        }
    }
}

void Function :: displayResults(){
    for (int i : numbers){
        cout << i << " ";
    }
}

