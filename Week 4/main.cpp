#include <iostream>

#include "user_input_functions.h"
#include "matrix_output_functions.h"

using namespace std;

int main() {

    //declare used variables
    int matrix_index = 0;
    int n = 0;
    bool end_while_loop = false;

    //Main loop
    while (end_while_loop == false)
    {
        //ask for the type of matrix to be shown
        matrix_index = ask_for_matrix_type();

        //check for a valid matrix_index input from user
        if ((matrix_index >= 1) and (matrix_index<=5))
        {
            //if valid, ask for matrix dims.
            n = ask_for_matrix_size(matrix_index);
        }
        end_while_loop = matrix_selection_function(matrix_index, n, end_while_loop);
    }
    cout << "\n";

    return 0;
}