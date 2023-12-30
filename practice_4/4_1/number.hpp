#ifndef _NUMBER_HPP_
#define _NUMBER_HPP_

class Number{
private:
// メンバ変数
    int a;
    int b;

public:
    // コンストラクタ
    Number();
    // 二つの数値を設定
    void setNumbers(int n1, int n2);
    // 二つの数値の和を計算
    int getAdd();
};

#endif // _NUMBER_HPP_