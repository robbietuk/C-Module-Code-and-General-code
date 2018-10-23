#include <iostream>
#include <string>


#include "common_functions.h"

using namespace std;




int main()
{
    int n = 0;
    cout << "Input a positive integer\n";
    cin >> n;

    //factorial calculator
    cout << n << "! (factorial) = " << factorial(n) << endl;

    cout << n << "^" << n << " = " << power(n) << endl;

    return 0;
}