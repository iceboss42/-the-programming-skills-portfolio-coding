#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
    string answer;

    cout << "What is the capital of France? ";
    getline(cin, answer);

    // Convert the answer to lowercase for comparison
    string lowerAnswer = answer;
    transform(lowerAnswer.begin(), lowerAnswer.end(), lowerAnswer.begin(), ::tolower);

    if (lowerAnswer == "paris") {
        cout << "Correct! Well done." << endl;
    } else {
        cout << "Incorrect. The correct answer is Paris." << endl;
    }

    return 0;
}
