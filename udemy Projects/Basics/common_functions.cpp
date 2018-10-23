//
// Created by Robert Twyman on 23/10/2018.
//

#include "common_functions.h"
#include <iostream>


//Factorial Function
int factorial(int n)
{
    if (n>0)
    {
        return factorial(n-1)*n;
    }else{
        return 1;
    }
}


//custom integer power function
int power(int n)
{
    int m = 0;
    for (int i = 1; i<=n; i++)
    {
        m = n*n;
    }
    return m;
}



