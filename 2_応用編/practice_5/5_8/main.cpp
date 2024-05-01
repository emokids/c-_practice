#include <bits/stdc++.h>

using namespace std;

int main(){
    map <char, string> dict;
    char number[] = {'0', '1','2', '3','4','5','6','7','8','9'};
    dict[number[0]] = "○";
    dict[number[1]] = "一";
    dict[number[2]] = "二";
    dict[number[3]] = "三";
    dict[number[4]] = "四";
    dict[number[5]] = "五";
    dict[number[6]] = "六";
    dict[number[7]] = "七";
    dict[number[8]] = "八";
    dict[number[9]] = "九";

    string input;
    cout << "整数の値を入力してください．" << endl;
    cin >> input;

    queue<string> input_queue;
    string reverseinput = input;
    reverse(reverseinput.begin(), reverseinput.end());
    int count = 0;
    for(char c:reverseinput){
        if(count % 3 == 0 and count != 0){
            input_queue.push(",");
        }
        if(dict.count(c)){
            input_queue.push(dict[c]);
        }
        else{
            cout << "整数を入力しろや！";
            break;
        }
        count++;
    }    

    stack<string> reverse_stack;

    while(!input_queue.empty()){
        reverse_stack.push(input_queue.front());
        input_queue.pop();
    }
    
    while(!reverse_stack.empty()){
        cout << reverse_stack.top();
        reverse_stack.pop();
    }


} 