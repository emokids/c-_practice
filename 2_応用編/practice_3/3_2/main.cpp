#include <iostream>
#include "collectionint.hpp"
 
using namespace std;
 
int main(){
    cout << "実数の場合" << endl;
    //  配列変数の定義
    double array[] = { 1.2,3.5,4.9,2.0,2.2 };
    Collection<double> *c_double;
    c_double = new Collection<double>(array, 5);
    c_double->showArray();
    cout << "最大値 : " << c_double->getMax() << endl;
    cout << "最小値 : " << c_double->getMin() << endl;
    delete c_double;

    cout << endl <<"整数の場合" << endl;
    //  配列変数の定義
    int array2[] = { 1,5,4,2,3 };
    Collection<int> *c_int;
    c_int = new Collection<int>(array2, 5);
    c_int->showArray();
    cout << "最大値 : " << c_int->getMax() << endl;
    cout << "最小値 : " << c_int->getMin() << endl;
    delete c_int;
    return 0;
}