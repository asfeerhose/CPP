// Asfand Khan
// 2024-09-17
// Description: Guessing Game
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0));
    int number_to_guess = std::rand() % 10 + 1;
    std::cout << "I'm thinking of a number between 1-10. Try to guess it." << std::endl;

    int user_guess = 0;

    while (user_guess != number_to_guess)
    {
        std::cout << "Enter your guess: ";
        std::cin >> user_guess;

        if (number_to_guess == user_guess)
        {
            std::cout << "Congratulations! You've guessed the number correctly." << std::endl;
        }
        else
        {
            std::cout << "Incorrect, Try again." << std::endl;
        }
    }

    std::cout << "Game Over" << std::endl;
    return 0;
}