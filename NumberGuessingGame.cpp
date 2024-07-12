#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;  
    int Guess = 0;
    cout << "Guess the number (between 1 and 100): ";
    while (Guess != randomNumber) {
        cin >> Guess;
        if (Guess > randomNumber) {
            cout << "TOO HIGH !Please enter a smaller number : ";
        } else if (Guess < randomNumber) {
            cout << "TOO LOW !Please enter a greater number : ";
        } else {
            cout << "Yay! You Guessed the correct number.\n";
        }
    }
    return 0;
}
