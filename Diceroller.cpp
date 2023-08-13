#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice() {
    return (rand() % 6) + 1; // Generates a random number between 1 and 6
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator

    cout << "Dice Rolling Simulator" << endl;

    while (true) {
        cout << "Press Enter to roll the dice (or type 'exit' to quit): ";
        string input;
        getline(cin, input);

        if (input == "exit") {
            break;
        }

        int die1 = rollDice();
        int die2 = rollDice();

        cout << "You rolled a " << die1 << " and a " << die2 << ". Total: " << die1 + die2 << endl;
    }

    cout << "Goodbye!" << endl;

    return 0;
}
