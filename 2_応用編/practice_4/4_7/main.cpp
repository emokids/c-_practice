#include <bits/stdc++.h>
#include "filteredInput.hpp"

using namespace std;

int main(){
    FilteredInput* run;
    run = new FilteredInput();
    run -> createList();
    run -> print();
    delete run;
    return 0;
}