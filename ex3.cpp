#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "example_file.txt";

    ifstream infile(filename);
    if (!infile) {
        cout << "Error opening file. Exiting." << endl;
        return 1;
    }

    int num_lines = 0;
    int num_chars = 0;
    string line;
    while (getline(infile, line)) {
        num_lines++;
        num_chars += line.length();
    }
    infile.close();

    double avg_length = static_cast<double>(num_chars) / num_lines;

    cout << "Number of lines: " << num_lines << endl;
    cout << "Number of characters: " << num_chars << endl;
    cout << "Average line length: " << avg_length << endl;

    // Combine lines into one row
    string combined_filename = "combined_file.txt";

    ofstream outfile(combined_filename);
    if (!outfile) {
        cout << "Error opening file. Exiting." << endl;
        return 1;
    }

    infile.open(filename);
    while (getline(infile, line)) {
        outfile << line;
    }
    infile.close();
    outfile.close();

    cout << "File combined successfully." << endl;

    return 0;
}