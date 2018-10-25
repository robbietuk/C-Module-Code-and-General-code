//
// Created by Robert Twyman on 24/10/2018.
//

#include "hi.h"

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