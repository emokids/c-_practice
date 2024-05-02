#include "catcher.h"

Catcher::Catcher(string name,  int number){
    m_name = name;
    m_number = number;
    m_kind = "キャッチャー";
}

void Catcher::play(){
    cout << "捕球する" << endl;
}