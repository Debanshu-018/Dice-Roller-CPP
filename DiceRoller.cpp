#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    char choice;

    // Seed the random number generator
    srand(time(0));

    cout << "=====================================" << endl;
    cout << "       DICE ROLLER SIMULATOR       " << endl;
    cout << "=====================================" << endl;

    do {
        int dice = rand() % 6 + 1;

        cout << "\n🎲 You rolled: " << dice << endl;

        switch (dice) {
            case 1:
                cout << "-----\n";
                cout << "|   |\n";
                cout << "| * |\n";
                cout << "|   |\n";
                cout << "-----\n";
                break;

            case 2:
                cout << "-----\n";
                cout << "|*  |\n";
                cout << "|   |\n";
                cout << "|  *|\n";
                cout << "-----\n";
                break;

            case 3:
                cout << "-----\n";
                cout << "|*  |\n";
                cout << "| * |\n";
                cout << "|  *|\n";
                cout << "-----\n";
                break;

            case 4:
                cout << "-----\n";
                cout << "|* *|\n";
                cout << "|   |\n";
                cout << "|* *|\n";
                cout << "-----\n";
                break;

            case 5:
                cout << "-----\n";
                cout << "|* *|\n";
                cout << "| * |\n";
                cout << "|* *|\n";
                cout << "-----\n";
                break;

            case 6:
                cout << "-----\n";
                cout << "|* *|\n";
                cout << "|* *|\n";
                cout << "|* *|\n";
                cout << "-----\n";
                break;
        }

        cout << "\nRoll again? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nThank you for playing! 🎲" << endl;

    return 0;
}
