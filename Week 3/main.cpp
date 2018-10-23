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


//Calculate integer based exponents with an integer base using a for loop
int exp(int base, int exponent)
{
    int value=1;
    for (int i =1; i <= exponent; i++) {value = value*base;}
    return value;
}

//Calculate integer based exponents with an integer base using a recursive function
int recursive_exp(int base, int exponent)
{
    if (exponent > 1){
        return base*recursive_exp(base, exponent-1) ;
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


double sqrt(double x)
{
    double low =1.0;
    double high = x;
    double estimate = 0.0;

    for (int i = 1; i<=30; i++)
    {
        estimate = (high + low)/2;
        if (estimate*estimate < x) { low  = estimate; }
        if (estimate*estimate > x) { high = estimate; }
    }
    return estimate;
}



void sqrt_func()
{
    double x = 0;
    cout << "Input value to sqrt\n";
    cin >> x;
    cout << "The squareroot of " << x << " is " << sqrt(x) << endl;
}




int main()
{
    max_func();
    degree_classification_func();
    raise_to_power_func();
    sqrt_func();
    return 1;
}