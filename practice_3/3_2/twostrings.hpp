#ifndef _TWOSTRINGS_HPP_
#define _TWOSTRINGS_HPP_

#include <bits/stdc++.h>

using namespace std;

class Twostrings
{
private:
    //一つ目の文字列
    string n_string1;
    // 2つ目の文字列
    string n_string2;

public:
    // 一つ目の文字列セッター
    void setstring1(string s);
    // 2つ目の文字列セッター
    void setstring2(string s);
    // 1つ目の文字列ゲッター
    string getstring1();
    // 2つ目の文字列ゲッター
    string getstring2();
    // 2つの文字列を合わせるメンバ
    string getConnectedString();
    // 繋いだ文字列の文字数を返すメンバ
    int getConnectedLength();
};


#endif // _TWOSTRINGS_HPP_