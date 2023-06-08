// Fatimah Al-Fareed | Hedaya Al-Neamah 
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Display a welcome message
    cout << "Welcome to the Laws of Physics Program!" << endl;
    cout << "-------------------------------------" << endl;

    // Display the menu of laws
    cout << "Menu of Laws:" << endl;
    cout << "-------------" << endl;
    cout << "F - Newton's Second Law" << endl;
    cout << "U - Potential Energy" << endl;
    cout << "I - Ohm's Law" << endl;
    cout << "E - Electric Field" << endl;
    cout << endl;

    // Prompt the user to input the symbol of the selected law
    char symbol;
    cout << "Please enter the symbol of the law you would like to use: ";
    cin >> symbol;
    cout << endl;

    // Declare variables for the required values
    double value1, value2, result;

    // Use a switch statement to handle the user's selection
    switch(symbol) {
        case 'F':
            // Prompt the user to input the values for Newton's Second Law
            cout << "You have selected Newton's Second Law." << endl;
            cout << "Please enter the values for m and a, separated by spaces: ";
            cin >> value1 >> value2;

            // Calculate the force F
            result = value1 * value2;
            break;
        
        case 'U':
            // Prompt the user to input the values for Potential Energy
            cout << "You have selected Potential Energy." << endl;
            cout << "Please enter the values for m and h, separated by spaces: ";
            cin >> value1 >> value2;

            // Calculate the potential energy U
            result = value1 * 9.8 * value2;
            break;
        
        case 'I':
            // Prompt the user to input the values for Ohm's Law
            cout << "You have selected Ohm's Law." << endl;
            cout << "Please enter the values for V and R, separated by spaces: ";
            cin >> value1 >> value2;

            // Calculate the current I
            result = value1 / value2;
            break;

        case 'E':
            // Prompt the user to input the values for Electric Field
            cout << "You have selected Electric Field." << endl;
            cout << "Please enter the values for q and r, separated by spaces: ";
            cin >> value1 >> value2;

            // Calculate the electric field E
            result = (1.0 / (4.0 * M_PI * 8.85e-12)) * (value1 / pow(value2, 2));
            break;

        default:
            // Display an error message for an invalid selection
            cout << "Invalid selection! Please try again." << endl;
            return 1;
    }

    // Display the result
    cout << "The result is: " << result << endl;
    
    return 0;
}