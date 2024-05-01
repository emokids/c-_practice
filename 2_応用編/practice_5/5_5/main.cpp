#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<string> input_queue;
    string input;

    cout << "文字列を入力：";
    while(getline(cin, input)){
        if (input.empty()){
            break;
        }
        input_queue.push(input);
        cout << "文字列を入力：";
    }
    cout << endl;

    while(!input_queue.empty()){
        cout << input_queue.front() << endl;
        input_queue.pop();
    }

    return 0;
}