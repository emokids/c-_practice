#include <bits/stdc++.h>
#include "filteredInput.hpp"

using namespace std;

FilteredInput::FilteredInput() : words({}){}

void FilteredInput::createList(){
    string word;
    while(true){
        cout << "文字列を入力：";
        getline(cin, word);
        if (word.empty()){
            break;
        }
        if (word.length() < 5){
            words.push_back(word);
        }
    }
}

void FilteredInput::print(){
    cout << "5文字未満の単語：";
    for (const auto &i : words){
        cout << i << ", ";
    }
    cout << endl;
}