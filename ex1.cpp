#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_TEMPERATURES = 5;

void printTemperatures(double temperatures[]) {
    cout << "Temperature values entered: ";
    for (int i = 0; i < NUM_TEMPERATURES; i++) {
        cout << fixed << setprecision(2) << temperatures[i] << char(176) << "C ";
    }
    cout << endl;
}

double calculateAverage(double temperatures[]) {
    double total = 0.0;
    for (int i = 0; i < NUM_TEMPERATURES; i++) {
        total += temperatures[i];
    }
    return total / NUM_TEMPERATURES;
}

int main() {
    double temperatures[NUM_TEMPERATURES];

    // Ask the user for 5 temperature values
    for (int i = 0; i < NUM_TEMPERATURES; i++) {
        cout << "Enter temperature " << i + 1 << ": ";
        cin >> temperatures[i];
    }

    // Calculate average temperature
    double averageTemperature = calculateAverage(temperatures);

    // Print temperature values
    printTemperatures(temperatures);

    // Print average temperature
    cout << "Average temperature is: " << fixed << setprecision(2) << averageTemperature << char(176) << "C" << endl;

    return 0;
}
