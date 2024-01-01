#include "twostrings.hpp"

void Twostrings :: setstring1(string s){
    n_string1 = s;
}

void Twostrings :: setstring2(string s){
    n_string2 = s;
}

string Twostrings :: getstring1(){
    return n_string1;
}

string Twostrings :: getstring2(){
    return n_string2;
}

string Twostrings :: getConnectedString(){
    return n_string1 + n_string2;
}

int Twostrings :: getConnectedLength(){
    return getConnectedString().length();
}