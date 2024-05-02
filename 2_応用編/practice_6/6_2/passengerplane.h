#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_
 
#include"airplane.h"
 
//  旅客機クラス
class PassengerPlane : public Airplane{
public:
    //  コンストラクタ
    PassengerPlane();
    //  飛行する
    void fly();
    //  乗客を運ぶ
    void carryPassengers();
};
 
#endif // _PASSENGERPLANE_H_