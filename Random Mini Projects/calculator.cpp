/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

This program is a simple calculator to work on simple arithmetics
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // create variable to get user input for calculation
    long a;
    long b;
    char operate;
    
    std::cout << "Enter the first number" << std::endl;
    
    std::cin >> a;
    
    std::cout << "Enter an operator (+, -, * or /)" << std::endl;
    
    std::cin >> operate;
    
    std::cout << "Enter the second number" << std::endl;
    
    std::cin >> b;
    
    // Logical program for addition
    
    if(operate == '+'){
        
       long result = a + b;
        
        std::cout << a << " + " << b << " " << " is " << result << std::endl;
    }
    
    // Logical program for subtraction
    
    else if(operate == '-'){
        
       long result = a - b;
        
        std::cout << a << " - " << b << " " << " is " << result << std::endl;
    }
    
    // Logical program for multiplication
    
    else if(operate == '*'){
        
       long result = a * b;
        
        std::cout << a << " * " << b << " " << " is " << result << std::endl;
    }
    
    // Logical program for division
    
    else if(operate == '/'){
        
        if(a == 0 || b == 0){
            std::cout << "Invalid operation" << std::endl;
        }
        
       else { 
           long result = a / b;
        
        std::cout << a << " / " << b << " " << " is " << result << std::endl;
       }
        
    }
    
    else {
        std::cout << " Invalid operator entered" << std::endl;
    }
    

    
    return 0;
   
}