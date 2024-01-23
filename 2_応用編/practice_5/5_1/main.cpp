#include <bits/stdc++.h>

using namespace std;

int main(){
    map <string, string> dict;
    string english[] = {"cat", "dog", "bird", "tiger"};
    dict[english[0]] = "猫";
    dict[english[1]] = "犬";
    dict[english[2]] = "鳥";
    dict[english[3]] = "虎";

    string input;
    cout << "英語で動物の名前を入力してください．" << endl;
    cin >> input;

    if (dict.count(input)){
        cout << "「" << dict[input] << "」" << endl;
    }
    else{
        cout << "対応するデータは登録されていません．" << endl;
    }

}