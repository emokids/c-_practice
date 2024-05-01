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


    string reverseInput = input;
    reverse(reverseInput.begin(),reverseInput.end());
    string result;
    int count = 0;
    for(char c:reverseInput){
        if (count % 3 == 0 and count != 0) {
            result += ',';
        }
        if (dict.count(c)){
            result += dict[c];
        }
        else{
        cout << "整数を入力しろや！";
        break;
    }
        count++;
    } 
    wstring w_result;
    wstring_convert<codecvt_utf8<wchar_t>> converter;
    w_result = converter.from_bytes(result);
    reverse(w_result.begin(), w_result.end());
    result = converter.to_bytes(w_result);
    cout << result ;

} 