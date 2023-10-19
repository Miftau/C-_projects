/******************************************************************************


This program creates a basic calculator for a user with simple User-Interface
made of simple menu for input.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

// Addition function
void addition() {


    float a, b;         // a and b are the input variables

    std::cout << "Enter 2 numbers to perform calculation" << std::endl;
    std::cin >> a >> b;

    float result = a + b;

    std::cout << "The addition of the 2 numbers is: " << result << std::endl;
}

// Subtraction function
void subtraction() {

    float a, b;         // a and b are the input variables

    std::cout << "Enter 2 numbers to perform calculation" << std::endl;
    std::cin >> a >> b;

    float result = a - b;

    std::cout << "The Subtraction of the 2 numbers is: " << result << std::endl;
}

// Multiplication function
void multiplication() {

       float a, b;         // a and b are the input variables

    std::cout << "Enter 2 numbers to perform calculation" << std::endl;
    std::cin >> a >> b;

    float result = a * b;

    std::cout << "The Multiplication of the 2 numbers is: " << result << std::endl;
}

// Division function
void division() {

    float a, b;         // a and b are the input variables

    std::cout << "Enter 2 numbers to perform calculation" << std::endl;
    std::cin >> a >> b;

    if(a == 0 || b == 0){
        cout << "Please enter valid numbers, Zero is not divisible\n";
    }

    float result = a / b;

    std::cout << "The division of the 2 numbers is: " << result << std::endl;
}

// power function
void power() {

    float a, b;         // a and b are the input variables

    std::cout << "Enter 2 numbers to perform calculation" << std::endl;
    std::cin >> a >> b;

    float result = pow(a, b);

    std::cout << "The result of " << a << " raise to the power of " << b << " is: " << result << std::endl;
}

// square root function
void square_root() {

    float num;        // a and b are the input variables

    std::cout << "Enter a number to perform calculation" << std::endl;
    std::cin >> num;

    float result = sqrt(num);

    std::cout << "The square root of " << num << " is: " << result << std::endl;
}

void logrithm() {

    float num;        // a and b are the input variables

    std::cout << "Enter a number to perform calculation" << std::endl;
    std::cin >> num;

    float result = log10(num);


    std::cout << "The log of " << num << " in base 10 is: " << result << std::endl;
}

void discard(){

    cout << endl;
}


int main ()
{

    do{

        std::cout << "This is Basic Calculator" << std::endl;
        std::cout << " " << std::endl;


    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    char f = 'f';
    char g = 'g';
    char h = 'h';

    std::cout << a << ". Add 2 numbers" << std::endl;
    std::cout << b << ". Subtract 2 numbers" << std::endl;
    std::cout << c << ". Multiply 2 numbers" << std::endl;
    std::cout << d << ". Divide 2 numbers"<< std::endl;
    std::cout << e << ". Find the power of 2 numbers" << std::endl;
    std::cout << f << ". Find the square root of a number" << std::endl;
    std::cout << g << ". Find the log of a number to base 10" << std::endl;
    std::cout << h << ". Exit" << std::endl;
    std::cout << "Enter your option: ";

    char option;   // input option

    cin >> option;

    // Logical programs to perform operations

    if(option == a){

        addition();
        std::cout << " " << std::endl;
    }

    else if(option == b){

        subtraction();
        std::cout << " " << std::endl;
    }

    else if(option == c){

        multiplication();
        std::cout << " " << std::endl;
    }

    else if(option == d){

        division();
        std::cout << " " << std::endl;
    }

    else if(option == e){

        power();
        std::cout << " " << std::endl;
    }

    else if(option == f){

        square_root();
        std::cout << " " << std::endl;
    }

    else if(option == g){

        logrithm();
        std::cout << " " << std::endl;
    }

    else if(option == h){

        discard();
        return 0;
    }
    else {
        std::cout << "Invalid operation" << std::endl;
    }

    } while(true);

    return 0;
}
