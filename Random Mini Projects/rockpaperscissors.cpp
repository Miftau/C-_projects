/******************************************************************************


This program simulates a game of Rock Paper Scissors between 2 players.
The input will be the choices of player 1 and player 2
It will output who won or if the game ends in a draw


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // Variables to hold the input of the players
    
    string player1; string player2;
    
    // Variables to hold each corresponding keys in the game
    
    string scissors = "Scissors"; 
    string rock = "Rock";
    string paper = "Paper";
    
    std::cout << "Player 1, enter  Scissors,Rock or Paper as input" << std::endl;
    
    std::cin >> player1;
    
    std::cout << "Player 2, enter  Scissors,Rock or Paper as input" << std::endl;
    
    std::cin >> player2;
    
    // Logical operation to judge the outcome of the game.
    
    if (player1 == rock && player2 != paper){
        
        std::cout << "Player 1 wins" << std::endl;
    }
    else if(player1 == scissors && player2 != rock){
        
        std::cout << "Player 1 wins" << std::endl;
    }
    
    else if(player1 == player2){
        
        std::cout << "The game is draw" << std::endl;
    }
    
    else if(player2 == scissors && player1 != rock){
        
        std::cout << "Player 2 wins" << std::endl;
    }
    
    else if(player2 == rock && player1 != paper){
        
        std::cout << "Player 2 wins" << std::endl;
    }
    
    else{
        
        std::cout << "Invalid game input" << std::endl;
    }
    
    
    return 0;
}