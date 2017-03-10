#include "testlib.h"
#include <iostream>
using namespace std;

const int MAX_D = 50;
const int MAX_N = 50;
const int MAX_X = 50;
const int MAX_PRODUCT = 50;
const int MAX_COST = 100000;

void check_case()
{
    int n = inf.readInt(1, MAX_N, "n");
    inf.readSpace();
    int x = inf.readInt(1, MAX_X, "x");
    inf.readEoln();

    for(int i=0; i<n; ++i)
    {
        int a = inf.readInt(0, MAX_PRODUCT, format("a[%d]",i));

        inf.readSpace();

        int b = inf.readInt(0, MAX_PRODUCT, format("b[%d]",i));

        inf.readSpace();

        int c = inf.readInt(0, MAX_PRODUCT, format("c[%d]",i));

        inf.readSpace();

        int y = inf.readInt(1, MAX_COST, format("y[%d]",i));

        inf.readEoln();
    }

    return;
}

int main()
{
    registerValidation();

    int cases = inf.readInt(1, MAX_D, "cases");
    inf.readEoln();

    for(int i=0; i<cases; ++i)
    {
        check_case();
    }

    inf.readEof();
    return 0;
}
