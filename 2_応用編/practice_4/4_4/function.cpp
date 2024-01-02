#include <bits/stdc++.h>
#include "function.hpp"

using namespace std;

Function::Function() : maxvec(10,""), minvec(10,""){
}

void Function :: createVector(){
    string str;
    int minLength = INT_MAX;
    int maxLength = INT_MIN;
    // コンソールから入力された数値を配列に格納
    while(true){
        cout << "文字列を入力：";
        getline(cin, str);
        if (str.empty()){
            break;
        }
        int strLength = str.length();
        if (strLength > maxLength ){
            maxvec = {str};
            maxLength = strLength;
        }
        else if (strLength == maxLength){
            maxvec.push_back(str);
        }
        if (strLength < minLength){
            minvec = {str};
            minLength = strLength;
        }
        else if (strLength == minLength){
            minvec.push_back(str);
        }
    }
}

void Function :: displayResults(){
    cout << "最長の単語：";
    for (string i : maxvec){
        cout << i << " ";
    }
    cout << endl << "最短の単語：";
    for (string i : minvec){
        cout << i << " ";
    }
}

