#include <iostream>
using namespace std;

int main() {
    int number;
    char repeat;

    // Inform the user about the program's behavior
    cout << "This program is designed to display the positive divisors of positive integers provided by you." << endl;
    cout << "You can repeat the process as many times as you'd like." << endl;

    do {
        // Prompt the user to enter a positive integer
        cout << "Please enter a positive integer: ";
        cin >> number;

        // Check if the input is a positive integer
        while (number <= 0) {
            cout << number << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> number;
        }

        // Print divisors in decreasing order
        cout << "Divisors of " << number << " in decreasing order are:" << endl;
        for (int i = number; i >= 1; --i) {
            if (number % i == 0) {
                cout << i << endl;
            }
        }

        // Ask the user if they want to enter another integer
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> repeat;

        // Handle incorrect responses for the repeat prompt
        while (repeat != 'Y' && repeat != 'y' && repeat != 'N' && repeat != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no: ";
            cin >> repeat;
        }

    } while (repeat == 'Y' || repeat == 'y');

    // End of program
    cout << "Goodbye!" << endl;
    return 0;
}

