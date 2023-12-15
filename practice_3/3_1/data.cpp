#include "data.hpp"

void CData :: init(){
    number = 0;
    comment = "";
}

void CData :: setnumber(int m_num){
    number = m_num;
}

void CData :: setcomment(string m_comment){
    comment = m_comment;
}

int CData:: getnumber(){
    return number;
}

string CData :: getcommnet(){
    return comment;
}