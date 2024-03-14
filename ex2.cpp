#include <iostream>
#include <string>

using namespace std;

void calculateAvgWordLength() {
    string word;
    int totalLength = 0;
    float avgLength = 0.0;

    // Ask the user for 5 words and calculate total length
    for (int i = 1; i <= 5; i++) {
        cout << "Enter word " << i << ": ";
        cin >> word;
        totalLength += word.length();
    }

    // Calculate average word length
    avgLength = (float)totalLength / 5;

    // Output the result
    cout << "The average word length is " << avgLength << endl;
}

int main() {
    calculateAvgWordLength();
    return 0;
}