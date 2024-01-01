#include <bits/stdc++.h>
#include "object.hpp"

using namespace std;

// 静的メンバ変数の初期値を設定
int Object :: m_objectNum = 0;

Object :: Object(){
    // オブジェクトの数をカウント
    m_objectNum ++;
}

Object :: ~Object(){
    // オブジェクトの数をカウントする
    m_objectNum --;
}

int Object :: getObjectNum(){
    return m_objectNum;
}