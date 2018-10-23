//  Created by Robert Twyman on 15/10/2018.
//  Copyright © 2018 Robert Twyman. All rights reserved.
#include <iostream>
#include <typeinfo>



//task2.1 - A function which prints "hello UCL"
void hello_UCL()
{
    std::string msg = "hello UCL";
    std::cout << msg << std::endl;
}

//task2.2 - a functuon that takes an int input and prints it
void print_int(int x)
{
    std::cout
    << "The variable is: " << x
    << "\nThe address of x in the function is: " << &x
    << std::endl;
}

//task2.4 - a function that adds two integers
int sum_ints(int x, int y)
{
    return x+y;
}


int my_hello_func()
{
    std::cout << "hello world, I am a function" << std::endl;
}




int main()
{
    //task1.1 [address]
    bool mybool;
    std::cout << "mybool address: " << &mybool << std::endl;
    
    //task1.2 [address cont.]
    short myshort;
    int myint;
    long mylong;
    float myfloat;
    double mydouble;
    std::cout
    << "myshort address: " << &myshort << "\n"
    << "myint address: " << &myint << "\n"
    << "mylong address: " << &mylong << "\n"
    << "myfloat address: " << &myfloat << "\n"
    << "mydouble address: " << &mydouble << std::endl;
    
    //task1.3 [size of]
    std::cout << "mybool size: " << sizeof(mybool) << std::endl;
    std::cout << "myshort size: " << sizeof(myshort) << std::endl;
    std::cout << "myint size: " << sizeof(myint) << std::endl;
    std::cout << "mylong size: " << sizeof(mylong) << std::endl;
    std::cout << "myfloat size: " << sizeof(myfloat) << std::endl;
    std::cout << "mydouble size: " << sizeof(mydouble) << std::endl;
    
    //task1.4 [typeid]
    std::cout << "mybool typeid: " << typeid(mybool).name() << std::endl;
    std::cout << "myshort typeid: " << typeid(myshort).name() << std::endl;
    std::cout << "myint typeid: " << typeid(myint).name() << std::endl;
    std::cout << "mylong typeid: " << typeid(mylong).name() << std::endl;
    std::cout << "myfloat typeid: " << typeid(myfloat).name() << std::endl;
    std::cout << "mydouble typeid: " << typeid(mydouble).name() << std::endl;
    
    //tast1.5 [const]
    const int my_const_int = 1;
    std::cout << "my_const_int address: " << &my_const_int << std::endl;
    std::cout << "my_const_int size: " << sizeof(my_const_int) << std::endl;
    std::cout << "my_const_int type: " << typeid(my_const_int).name() << std::endl;
    //the const modifier has the same has the same type as the var. int
    
    //Task1.6
    //three tools for the behind the scenes storage of variable:
    //address &, size sizeof(), and type typeid().name()
    //constants have the same typeid as the variables
    
    
    //task 2.1
    hello_UCL();
    
    //task2.2
    int x1 = 1,
        x2 = 2;

    print_int(x2);

    
    //task2.3
    std::cout << "The address of x in main is: " << &x1 << std::endl;
    
    //task2.4
    print_int(sum_ints(x1, x2));
    
    
    //task3.1
    int a=1;
    std::cout << a++ << std::endl;
    
    //task3.2
    int b=1;
    std::cout << ++b << std::endl;
    
    //task3.3
    int c3=1;
    //failed: c1++ = 2;
    std::cout << "++(c3=2) = " << ++(c3=6) << std::endl;

    my_hello_func();
    
    
    return 1;
}
