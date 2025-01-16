#include "game.h"
#include <iostream>

using namespace std;

Game::Game(int mNbr){
    maxNumber=mNbr;
    cout << "Game constructor:" << maxNumber<< " as maximum number" << endl;

}

Game::~Game()
{

}

void Game::play()

{
    srand(time(NULL));
    randomNumber = rand()% maxNumber;
    numOfGuesses = 0;


    while (playerGuess != randomNumber){
        cout << "Give a number between 1 and 100: " << endl;
        cin >> playerGuess;
        numOfGuesses++;

     if (playerGuess == randomNumber){
         cout << "Your number is correct!" << endl;
         printGameResult();

     }else if (playerGuess > randomNumber){
         cout << "Your number is smaller" << endl;

     }else if (playerGuess < randomNumber){
         cout << "Your number is bigger" << endl;
     }

    }
}

void Game::printGameResult()
{
    cout << "correct number: " << randomNumber << endl;
    cout << "number of guesses: " << numOfGuesses << endl;
}


