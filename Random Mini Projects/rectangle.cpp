/******************************************************************************


This program gets the length and breadth of a rectangle from a user
and print out the bother of the rectangle

*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{
    
do{    
    
  // Get the length and breadth of the rectangle from the user.
  int length, breadth;
  cout << "Enter the length of the rectangle: ";
  cin >> length;
  cout << "Enter the breadth of the rectangle: ";
  cin >> breadth;

  // Print the first line

  for (int i = 0; i < length; i++)
    {
      cout << "* ";
    }
  cout << endl;

  // print the borders of the rectangle

  for (int i = 2; i < breadth; i++)
    {
      cout << "* ";
      for (int j = 0; j < length - 2; j++)
	{
	  cout << "  ";
	}
      cout << "* " << endl;
    } 

  // Print the last line of the border.
  for (int i = 0; i < length; i++)
    {
      cout << "* ";
    }
  cout << endl;
} while(true);  

  return 0;
}
