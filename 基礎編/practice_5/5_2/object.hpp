#ifndef _OBJECT_HPP_
#define _OBJECT_HPP_

class  Object
{
private:
    static int m_objectNum;
public:
    // コンストラクタ
    Object();
    // デストラクタ
    ~ Object();
    // m_objectNumの値を取得するメンバ関数
    static int getObjectNum();
};

#endif //_OBJECT_HPP_s;