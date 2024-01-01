#ifndef _CALCULATION_HPP_
#define _CALCULATION_HPP_

class Calculation
{
private:
    int m_number1;
    int m_number2;
    
public:
    void setNumeber1(int n);
    void setNumber2(int n);
    int getNumber1();
    int getNumber2();
    int add();
    int sub();
};




#endif //_CALCULATION_HPP_