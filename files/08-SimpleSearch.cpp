#include <iostream>
#include <string>
using namespace std;

int main() {

    // Array of names
    string names[6] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};

    string searchTerm = "Sam";
    bool found = false;

    // Loop through the array
    for (int i = 0; i < 6; i++) {
        if (names[i] == searchTerm) {
            found = true;
            break;
        }
    }

    // Output message
    if (found) {
        cout << "The name '" << searchTerm << "' was found in the list!" << endl;
    } else {
        cout << "The name '" << searchTerm << "' was NOT found." << endl;
    }

    return 0;
}
