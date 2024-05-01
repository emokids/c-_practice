#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    set<char> alphabet;
    cout << "英単語を入力：";
    cin >> input;
    for (char c : input){
        alphabet.insert(c);
    }
    cout << "使用されているアルファベット：";
    for (const auto& c : alphabet){
        cout << c << " ";
    }
}