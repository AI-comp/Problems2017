#include "testlib.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MAX_D = 100;
const int MAX_N = 100;

void check_case()
{
    int n = inf.readInt(1, MAX_N, "n");
    inf.readEoln();

    char s[101][101];
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            s[i][j] = inf.readChar();
        }
        inf.readEoln();
    }

    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(i==j)
            {
                if(s[i][j]!='-')
                {
                    printf(" s[%d][%d] !!!=== '-'\n", i,j);
                    exit(-1);
                }
            }
            else
            {
                if(s[i][j]=='-')
                {
                    printf(" s[%d][%d] ====== '-'\n", i,j);
                    exit(-1);
                }

                if(s[i][j] == s[j][i])
                {
                    printf(" s[%d][%d] ====== s[%d][%d]\n", i,j,j,i);
                    exit(-1);
                }
            }
        }
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
