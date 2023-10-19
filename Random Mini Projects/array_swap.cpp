#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* 
This program get an array of 2 elements with values gotten from the user.
Print the array, swap the array elements then print the array again. 

*/

int main(int argc, char** argv) {
	
	int input[2];
	
	
	cin.getline(input, 2);
	cout << input;
	
	return 0;
}
