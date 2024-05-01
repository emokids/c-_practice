#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<string> input_stack;
    string input;

    cout << "文字列を入力：";
    while(getline(cin, input)){
        if(input.empty()){
            break;
        }
        input_stack.push(input);
        cout << "文字列を入力：";
    }

    cout << endl;

    while(!input_stack.empty()){
        cout << input_stack.top() << endl;
        input_stack.pop();
    }
}