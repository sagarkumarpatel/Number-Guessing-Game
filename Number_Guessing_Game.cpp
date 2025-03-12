#include<iostream>
using namespace std;

int count;

void Guessing_game(int number, int guessing_number) {
    if (number != guessing_number) {
        count++;
        if (number > guessing_number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Too low! Try again." << endl;
        }
    } else {
        cout << "Congratulations! You guessed the number in " << count << " attempts!" << endl;
    }
}

int main() {
    int number, choice;
    string option;
    int guessing_number = 50; // You can change this number for more fun!
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 to 100. Try to guess it!" << endl;

    do {
        count = 0; // Reset the count for each new game
        cout << "1) Start to Play the Guessing Game" << endl;
        cout << "2) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            do {
                cout << "Enter your guessing number (1-100): ";
                cin >> number;

                if (number < 1 || number > 100) {
                    cout << "Invalid input! Please enter a number between 1 and 100." << endl;
                    continue;
                }

                Guessing_game(number, guessing_number);

            } while (number != guessing_number);

            cout << "Do you want to play again? (yes/no): ";
            cin >> option;

        } else if (choice == 2) {
            cout << "Thanks for playing! Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (option == "yes");

    return 0;
}