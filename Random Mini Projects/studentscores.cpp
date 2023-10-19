/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    
   // Declare an array to store the scores of 5 students.
  int scores[5][3];

  // Get the scores of each student.
  for (int i = 0; i < 5; i++) {
    cout << "Enter the scores of student " << i + 1 << " in Math, English, and Science: ";
    for (int j = 0; j < 3; j++) {
      cin >> scores[i][j];
    }
  }

  // Calculate the total and average scores for each student.
  for (int i = 0; i < 5; i++) {
    int total = 0;
    for (int j = 0; j < 3; j++) {
      total += scores[i][j];
    }
    float average = total / 3.0;

    // Print the scores for each student.
    cout << "Student " << i + 1 << ": " << scores[i][0] << " " << scores[i][1] << " " << scores[i][2] << endl;
    cout << "Total: " << total << ", Average: " << average << endl;
  }

  return 0;

  return 0;
}