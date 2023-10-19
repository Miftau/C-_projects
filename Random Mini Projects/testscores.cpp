/******************************************************************************


A program to input some test scores, while validating input. 
The scores must be between 0 and 100, 
It keeps running to input the current score if it doesn’t satisfy the conditions.
Then print the average of these scores.


*******************************************************************************/
#include <iostream>

using namespace std;



int main ()
{
    int numScores;
  int score;
  float totalScore = 0;

  // Get the number of test scores
  cout << "Enter the number of test scores: ";
  cin >> numScores;

  // Iterate through the test scores
  for (int i = 0; i < numScores; i++) {
    // Get the current test score
    cout << "Enter test score #" << (i + 1) << ": ";
    cin >> score;

    // Validate the test score
    while (score < 0 || score > 100) {
      cout << "Invalid test score. Please enter a score between 0 and 100: ";
      cin >> score;
    }

    // Add the current test score to the total score
    totalScore += score;
  }

  // Calculate the average test score
  float averageScore = totalScore / numScores;

  // Print the average test score
  cout << "The average test score is " << averageScore << endl;

  return 0;
    
}
