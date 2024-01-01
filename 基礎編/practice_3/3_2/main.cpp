#include <bits/stdc++.h>
#include "twostrings.hpp"

using namespace std;

int main(){
    Twostrings s;
    s.setstring1("Hello");
    s.setstring2("World");
    cout << "1つ目の文字列は" << s.getstring1() << endl;
    cout << "2つ目の文字列は " << s.getstring2() << endl;
    cout << "2つの文字列を合成したものは" << s.getConnectedString() << endl;
    cout << "合成した文字列の長さは" << s.getConnectedLength() << endl;

    return 0;
}