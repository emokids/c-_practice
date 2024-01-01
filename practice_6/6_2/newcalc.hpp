#ifndef _NEWCALC_HPP_
#define _NEWCALC_HPP_

#include "fundcalc.hpp"
 
class NewCalc : public FundCalc{
public:
    // 2つの数の積を出力
    double mul();
    // 2つの数の商を出力
    double div();
};
 
#endif // _NEWCALC_HPP_