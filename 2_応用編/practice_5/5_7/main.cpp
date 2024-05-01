#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    stack<char> input_stack;
    cout << "英単語を入力：";
    cin >> input;
    for (char c : input){
        input_stack.push(c);
    }
    while(!input_stack.empty()){
        cout << input_stack.top();
        input_stack.pop();
    }
}