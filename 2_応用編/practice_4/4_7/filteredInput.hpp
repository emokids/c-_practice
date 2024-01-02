#ifndef _FILTEREDINPUT_HPP_
#define _FILTEREDINPUT_HPP_

#include <bits/stdc++.h>

using namespace std;

class FilteredInput {
private:
    list<string> words;
public:
    FilteredInput();
    void createList();
    void print();
};

#endif // _FILTEREDINPUT_HPP_