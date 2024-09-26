// Asfand Khan
// 2024-09-17
// Description: Dice Doubles
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout << "Here comes the dice!" << std::endl;

    int dice_1 = 0;
    int dice_2 = 1;

    std::srand(std::time(0));

    while (dice_1 != dice_2)
    {
        dice_1 = std::rand() % 6 + 1;
        dice_2 = std::rand() % 6 + 1;
        int total = dice_1 + dice_2;

        std::cout << "Roll 1: " << dice_1 << std::endl;
        std::cout << "Roll 2: " << dice_2 << std::endl;

        if (dice_1 == dice_2)
        {
            std::cout << "Doubles!!" << std::endl;
        }
        else
        {
            std::cout << "The total is " << total << "!" << std::endl;
        }
    }

    return 0;
}