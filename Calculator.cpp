#include <iostream>
using namespace std;
void Display() {
    cout << "\nSimple Calculator\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";
    cout << "Choose an option: \n";
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
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero is not allowed.\n";
        return 0;
    }
}
int main() {
    double num1, num2;
    int ch;
    while (true) {
        Display();
        cin >> ch;
        if (ch == 5) {
            cout << "Exit.\n";
            break;
        }
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        switch (ch) {
            case 1:
                cout <<"Result: "<< add(num1, num2) << endl;
                break;
            case 2:
                cout <<"Result: "<< subtract(num1, num2) << endl;
                break;
            case 3:
                cout <<"Result: "<< multiply(num1, num2) << endl;
                break;
            case 4:
                cout <<"Result: "<< divide(num1, num2) << endl;
                break;
            default:
                cout <<" Please try again.\n";
                break;
        }
    }
    return 0;
}
