#include <bits/stdc++.h>

using namespace std;

int main(){
    // 変数の宣言
    int num;
    vector<int> v;
    int max(vector<int>);
    int min(vector<int>);
    // コンソールから入力された数値を配列に格納
    while(true){
        cout << "正の整数を入力：";
        cin >> num;
        if (num != -1){
            v.push_back(num);
        }
        else {
            break;
        }
    }

    // 最大値を出力
    cout << "最大値：" << max(v) << endl;
    // 最小値を出力
    cout << "最小値：" << min(v) << endl;

}

int max(vector<int> a){
    int tmp;
    tmp = a[0];
    for (int i : a){
        if (tmp < a[i]){
            tmp = a[i];
        }
    }
    return tmp;
}

int min(vector<int> a){
    int tmp;
    tmp = a[0];
    for (int i : a){
        if (tmp > a[i]){
            tmp = a[i];
        }
    }
    return tmp;
}