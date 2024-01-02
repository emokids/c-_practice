#include <bits/stdc++.h>
#include "function.hpp"

using namespace std;

int main(){
    Function *func;
    func = new Function();
    func -> createVector();
    func -> displayResults();
    delete func;
    return 0;
}