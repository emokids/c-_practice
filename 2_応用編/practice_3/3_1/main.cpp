#include <iostream>
#include <string>
 
using namespace std;
 
//  整数値を比較し、大きいほうを返す関数
template <typename T>
T myMax(const T& x, const T& y){
 if constexpr (std::is_same<T, std::string>::value) {
    if (x.size() >= y.size()){
        return x;
    }
    else{
        return y;
    }
 }
 else {
    if (x >= y){
        return x;
    }
    else{
        return y;
    }
 }
}

int main(){
    cout << myMax<int>(1, 2) << endl;
    cout << myMax<double>(1.75,3.12) << endl;
    string s1 = "aiu",s2 = "eo";
    cout << myMax<string>(s1,s2) << endl;
    return 0;
}
 
