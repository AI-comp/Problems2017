#include "testlib.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MAX_T = 50;
const int MAX_K = 100;

void check_case()
{
    string s = inf.readToken("[a-zA-Z]{1,100}", "s");
    inf.readSpace();
    int k = inf.readInt(1, MAX_K, "k");
    inf.readEoln();
}

int main()
{
    registerValidation();

    int cases = inf.readInt(1, MAX_T, "cases");
    inf.readEoln();

    for(int i=0; i<cases; ++i)
    {
        check_case();
    }

    inf.readEof();
    return 0;
}
