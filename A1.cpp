#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> A)
{
    int c=0;
    int n=A.size();
    int prev=A[0];
    for (int i=0; i<n; i++)
        if (A[i]>prev)
        {
            prev=A[i];
            c++;
        }
    return c;

}




// main отвечает за ввод-вывод
// int main()
// {

// }
