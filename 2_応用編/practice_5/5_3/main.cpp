#include <bits/stdc++.h>

using namespace std;

int main(){
    //乱数生成器の初期化
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1,10);

    //乱数を生成し，表示
    set<int> unique_num;
    cout << "乱数：";
    for (int i = 0; i < 10; i++){
        int num = distr(gen);
        cout << num << " ";
        unique_num.insert(num);
    }

    //出現した数の種類を表示
    cout << "出現した数：";
    for (const auto &num : unique_num){
        cout << num << " ";
    }

}