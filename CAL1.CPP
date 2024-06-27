//Digital Calculator By Avinash Tiwari.
#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Welcome to the Digital Calculator" << endl;
    cout << "Select an operation to perform:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    int choice;
    double num1, num2;
    bool running = true;

    while (running) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            running = false;
            cout << "Exiting the calculator. Goodbye!" << endl;
            continue;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}
