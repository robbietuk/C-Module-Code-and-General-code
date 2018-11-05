//
// Created by Robert Twyman on 30/10/2018.
//
#include <iostream>

#include "matrix_output_functions.h"

using namespace std;

// main switch function
bool matrix_selection_function(int const matrix_index, int const n, bool end_while_loop)
{
    //based on input of matrix type, choose one case
    switch(matrix_index) {
        //EXIT CASE
        case 0:
            cout << "Exiting";
            end_while_loop = true;
            break;

        case 1:
            cout << "Identity Matrix of size " << n << "\n";
            I_matrix(n);
            break;

        case 2:
            cout << "K Matrix of size " << n << "\n";
            K_matrix(n);
            break;

        case 3:
            cout << "C Matrix of size " << n << "\n";
            C_matrix(n);
            break;

        case 4:
            cout << "T Matrix of size " << n << "\n";
            T_matrix(n);
            break;

        case 5:
            cout << "B Matrix of size " << n << "\n";
            B_matrix(n);
            break;

            //if invalid matrix type input, loop over again
        default:
            cout << "Please input a valid integer\n";
            break;
    }
    return end_while_loop;
}


void I_matrix(int const n)
{
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j) { cout << " 1 "; }
            else        { cout << " 0 "; }

            if (j == (n - 1)) { cout << endl; }
        }
    }
}


void K_matrix(int const n)
{
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j)                             { cout << " 2 "; }
            else if ((i == (j-1)) or (i == (j+1)))  { cout << "-1 "; }
            else                                    { cout  << " 0 "; }

            if (j == (n-1))                         { cout << endl; }
        }
    }
}


void C_matrix(int const n)
{
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j)                             { cout << " 2 "; }
            else if ((i == (j-1)) or (i == (j+1)))  { cout << "-1 "; }
            else if ((i == (j-3)) or (i == (j+3)))  { cout << "-1 "; }
            else                                    { cout  << " 0 "; }

            if (j == (n-1))                         { cout << endl; }
        }
    }
}


void T_matrix(int const n)
{
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n; j++) {

            if ((i == 0) and (j==0))                { cout << " 1 "; }
            else if (i == j)                        { cout << " 2 "; }
            else if ((i == (j-1)) or (i == (j+1)))  { cout << "-1 "; }
            else                                    { cout  << " 0 "; }

            if (j == (n - 1))                       { cout << endl; }
        }
    }
}


void B_matrix(int const n)
{
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n; j++) {

            if (((i == 0) and (j==0))
            or ((i == (n-1)) and (j == (n-1))))     { cout << " 1 "; }

            else if (i == j)                        { cout << " 2 "; }
            else if ((i == (j-1)) or (i == (j+1)))  { cout << "-1 "; }
            else                                    { cout  << " 0 "; }

            if (j == (n - 1))                       { cout << endl; }
        }
    }
}