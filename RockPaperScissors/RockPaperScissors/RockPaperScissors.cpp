// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string keepPlaying = "y";

    while (keepPlaying == "y") {
        string playerChoice = "";
        while (playerChoice != "rock" && playerChoice != "paper" && playerChoice != "scissors" &&
            playerChoice != "Rock" && playerChoice != "Paper" && playerChoice != "Scissors") {
            std::cout << "Enter rock, paper, or scissors: ";
            std::cin >> playerChoice;
        }

        int computerChoice = rand() % 3;

        // Computer chooses scissors
        if (computerChoice == 0) {
            std::cout << "Computer chooses scissors.\n";

            if (playerChoice == "paper" || playerChoice == "Paper") {
                std::cout << "You lose. Oof. Try again? Enter y/n: ";
                std::cin >> keepPlaying;
            }

            if (playerChoice == "rock" || playerChoice == "Rock") {
                std::cout << "You win! Nice. Play again? Enter y/n: ";
                std::cin >> keepPlaying;
            }

            if (playerChoice == "scissors" || playerChoice == "Scissors") {
                std::cout << "Tie! You don't lose but you ain't a winner either. Try again? Enter y/n: ";
                std::cin >> keepPlaying;
            }
        }

        // Computer chooses paper
        if (computerChoice == 1) {
            std::cout << "Computer chooses paper.\n";

            if (playerChoice == "rock" || playerChoice == "Rock") {
                std::cout << "You lose. Oof. Try again? Enter y/n: ";
                std::cin >> keepPlaying;
            }

            if (playerChoice == "scissors" || playerChoice == "Scissors") {
                std::cout << "You win! Nice. Play again? Enter y/n: ";
                std::cin >> keepPlaying;
            }

            if (playerChoice == "paper" || playerChoice == "Paper") {
                std::cout << "Tie! You don't lose but you ain't a winner either. Try again? Enter y/n: ";
                std::cin >> keepPlaying;
            }
        }

        // Computer chooses rock
        if (computerChoice == 2) {
            std::cout << "Computer chooses rock.\n";

            if (playerChoice == "scissors" || playerChoice == "Scissors") {
                std::cout << "You lose. Oof. Try again? Enter y/n: ";
                std::cin >> keepPlaying;
            }

            if (playerChoice == "paper" || playerChoice == "Paper") {
                std::cout << "You win! Nice. Play again? Enter y/n: ";
                std::cin >> keepPlaying;
            }

            if (playerChoice == "rock" || playerChoice == "Rock") {
                std::cout << "Tie! You don't lose but you ain't a winner either. Try again? Enter y/n: ";
                std::cin >> keepPlaying;
            }
        }

        while (keepPlaying != "y" && keepPlaying != "n") {
            std::cout << "Enter y/n: ";
            std::cin >> keepPlaying;
        }
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
