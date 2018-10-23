#include <iostream>
#include <string>

using namespace std;



int max(int a, int b) {return a > b ? a : b; }

//Task1
//max function: input two int. and displace the greater
void max_func()
{
    int a=0, b=0;
    cout << "Enter two integers and I will tell you which is greater\n";
    cin >> a;
    cin >> b;
    cout << max(a,b) << endl;
}



//get_classification: take input of an integer and return the degree classification for that percentage
string get_classification(int percentage)
{
    if (percentage >= 70 & percentage <= 100){return "Distinction";}
    if (percentage >= 60 & percentage <   70){return "Merit";}
    if (percentage >= 50 & percentage <   60){return "Pass";}
    if (percentage >= 40 & percentage <   50){return "Condoned Pass";}
    if (percentage >=  0 & percentage <   40){return "Fail";}
}



//Task2
//degree_classification_func: asks for an input of a percentage grade and then determines the degree classification
void degree_classification_func()
{
    int percentage = 0;
    cout << "Enter your percentage for the module.\n";
    cin >> percentage;

    cout << "With " << percentage << "% your degree classification is: " << get_classification(percentage) << endl;
}




int exp(int base, int exponent)
{
    int value=1;
    for (int i =1; i <= exponent; i++) {value = value*base;}
    return value;
}

int recursive_exp(int base, int exponent)
{
    if (exponent > 1){
        exponent = exponent-1;
        return base*recursive_exp(base, exponent) ;
    }else
    {
        return base;
    }

}






//Task3
//takes two inputs, a base and an exponent and determines the value
void raise_to_power_func()
{
    int base=0, exponent=0, basic_output;
    cout << "Raise to power function: Enter a base integer:\n";
    cin >> base;
    cout << "Now enter an exponent integer:\n";
    cin >> exponent;

    cout << "Using a for loop I get the value: " << exp(base, exponent) << endl;
    cout << "Using a recursive function I get the value: " << recursive_exp(base, exponent) << endl;

}






int main() {
     //max_func();
     //degree_classification_func();
    raise_to_power_func();

    return 1;
}