#include <iostream>
using namespace std;

int main() {
    const int correctPassword = 12345;
    int userPassword = 0;

    cout << "Enter the password to access the safe: ";
    cin >> userPassword;

    while (userPassword != correctPassword) {
        cout << "Incorrect password. Try again: ";
        cin >> userPassword;
    }

    cout << "Welcome to the Secure Area!" << endl;

    return 0;
}
