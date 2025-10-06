#include <iostream>
#include <fstream>
#include "writeFile.h"

using namespace std;

void writeFile() {
    ofstream file("data.txt", ios::app);
    if (!file) {
        cout << "Error opening file for writing." << endl;
        return;
    }

    string text;
    cout << "Enter text to write to file: ";
    cin.ignore();
    getline(cin, text);

    file << text << endl;
    file.close();
    cout << "Data written successfully." << endl;
}