/******************************************************************************


This programs takes in three sides of a triangle as an input and determine
the type of triangle by its sides length.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // Variables to hold the length of the sides of the triangle
    
    double side1; double side2; double side3;
    
    cout << " Enter the length of three sides of the triangle" << endl;
    
    cin >> side1 >> side2 >> side3;
    
    // Logical operation for equilateral triangle
    
    if(side1 == side2 && side1 == side3){
        
        cout << " triangle is equilateral" << endl;
    }
    
    // Logical operation for isoceles triangle
    
    else if(side1 == side2 || side1 == side3){
        
        cout << " triangle is isoceles" << endl;
    }
    
    // Logical operation for scalene triangle
    
    else if(side1 != side2 && side2 != side3){
        
        cout << " triangle is scalene" << endl;
    }
    
    return 0;
}