#include "minmax.hpp"

int Minmax :: max(int n1, int n2, int n3){
    if (n1 < n2 and n3 < n2) {
        return n2;
    }

    else if (n1 < n3 and n3 > n2)
    {
        return n3;
    }

    else {
        return n1;
    }
}

int Minmax :: min(int n1, int n2, int n3){
    return -max(-n1, -n2, -n3);
}