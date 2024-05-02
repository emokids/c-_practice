#include "airplane.h"

//コンストラクタ実装
Airplane::Airplane(const string& type):m_type(type){}
//ゲッター実装
string Airplane::getType(){
    return m_type;
}