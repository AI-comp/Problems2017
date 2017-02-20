#include "testlib.h"
#include <iostream>
using namespace std;

const int MAX_T = 50;
const int MAX_AB = 5000;

void check_case(){
    int a = inf.readInt(-MAX_AB, MAX_AB, "a");
    inf.readSpace();
    int b = inf.readInt(-MAX_AB, MAX_AB, "b");
    inf.readEoln();
    return;
}

int main(){
    registerValidation();

    int cases = inf.readInt(1, MAX_T, "cases");
    inf.readEoln();

    for(int i=0; i<cases; ++i){
        check_case();
    }

    inf.readEof();
    return 0;
}
