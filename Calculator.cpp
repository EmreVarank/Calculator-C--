#include <iostream>
using namespace std;
int main(){
    int choose;
    float x, t;

    while (true) { 
        cout << "Enter an operator: \n1-) Addition \n2-) Subtraction \n3-) Multiplication \n4-) Division \n5-) Exit" << endl;
        cin >> choose;

        if (choose == 5) { // Exit the program if the user chooses 5
            break;
        }

        switch (choose) {
            case 1:
                t = 0; // Initialize total for addition
                cout << "\nEnter the numbers you want to add (Print '0' to stop adding):" << endl;
                while (true) {
                    cin >> x;
                    if (x == 0) break; // Break the loop if user inputs 0
                    t += x;
                }
                cout << "\nTotal: " << t << endl;
                break;

            case 2:
                cout << "\nEnter the first number (Print '0' to stop subtracting) : " << endl;
                cin >> t; // Initialize total with the first number for subtraction
                while (true) {
                    cin >> x;
                    if (x == 0) break; // Break the loop if user inputs 0
                    t -= x;
                }
                cout << "\nTotal: " << t << endl;
                break;

            case 3:
                t = 1; // Initialize total for multiplication
                cout << "\nEnter the numbers you want to multiply (Print '1' to stop multiplying):" << endl;
                while (true) {
                    cin >> x;
                    if (x == 1) break; // Break the loop if user inputs 1
                    t *= x;
                }
                cout << "\nTotal: " << t << endl;
                break;

            case 4:
                cout << "\nEnter the first number (Print '1' to stop dividing) : " << endl;
                cin >> t; // Initialize total with the first number for division
                while (true) {
                    cin >> x;
                    if (x == 1) break; // Break the loop if user inputs 1
                    if (x == 0) {
                        cout << "Error! Division by zero is not allowed." << endl;
                        t = 0; // Reset total to 0 in case of division by zero
                        break;
                    }
                    t /= x;
                }
                if (t != 0) { // Show the result if no division by zero error
                    cout << "\nTotal: " << t << endl;
                }
                break;

            default:
                cout << "Error! Invalid operator." << endl; // Handle invalid operator input
                break;
        }
    }

    return 0;
}

    
