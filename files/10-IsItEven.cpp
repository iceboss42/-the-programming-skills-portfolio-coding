#include <iostream>
#include <string>
using namespace std;

// Function that checks if a number is even or odd
string checkEven(int num) {
    if (num % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

int main() {
    int number;

    // Ask user for a number
    cout << "Enter a number: ";
    cin >> number;

    // Call the function and store the returned message
    string result = checkEven(number);

    // Output the returned message
    cout << result << endl;

    return 0;
}
