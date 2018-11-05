//
// Created by Robert Twyman on 30/10/2018.
//

#include <iostream>
#include "user_input_functions.h"

using namespace std;

int ask_for_matrix_type()
{
    int matrix_index = 0;
    cout <<
         "Choose from the following options: \n"<<
         "=> To create an I matrix: Enter '1'\n"<<
         "=> To create an K matrix: Enter '2'\n"<<
         "=> To create an C matrix: Enter '3'\n"<<
         "=> To create an T matrix: Enter '4'\n"<<
         "=> To create an B matrix: Enter '5'\n"<<
         "=> To Exit:               Enter '0'\n";
    cin >> matrix_index;
    return matrix_index;
}

int ask_for_matrix_size(int matrix_index)
{
    //if matrix_index is 0 then the code should exit with no user input
    if (matrix_index == 0)
    {
        return 0;
    }

    int n = 0;
    cout <<
         "Enter the dimension of the matrix:\n";
    cin >> n;
    return n;
}


