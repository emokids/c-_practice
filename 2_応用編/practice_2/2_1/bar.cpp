#include "bar.hpp"
#include "foo.hpp"
#include <iostream>
 
using namespace std;
 
void Bar::func1(Foo* pFoo)
{
    pFoo->hoge();
}
void Bar::func2()
{
    cout << "Bar::func2" << endl;
}