#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    vector<int> v_even;
    vector<int> v_odd;
    while(true){
        cout << "正の整数を入力：";
        cin >> num;
        if (num % 2 == 0){
            v_even.push_back(num);
        }
        else if (num % 2 == 1){
            v_odd.push_back(num);
        }
        else if (num == -1){
            break;
        }
    }

    cout << "偶数：" << endl;
    for (int i : v_even){
        cout << i << " " ;
    }

    cout << endl << "奇数：" << endl;
    for (int i : v_odd){
        cout << i << " ";
    }
    return 0;
}