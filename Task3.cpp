// Number guessing game

/* Create a program that generates a random number and asks the user to guess it . Provide feedback on whether the guess is too high or too low
until the user guesses the correct number*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); 
    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;

cout << "Welcome to the Number Guessing Game!\n";
cout << "I have chosen a number between 1 and 100. Can you guess it?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts!\n";
        }
    } while (guess != randomNumber);

    return 0;
}





