#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H
 
#include "airplane.h"
 
//  戦闘機クラス
class FighterAircraft : public  Airplane{
public:
    //  コンストラクタ
    FighterAircraft();
    //  飛行する
    void fly();
    //  戦闘する
    void fight();
};
 
#endif // _FIGHTERAIRCRAFT_H_