#include <iostream>
#include <fstream>
#include <string>
#include "readFile.h"

using namespace std;

void readFile() {
    ifstream file("data.txt");
    if (!file) {
        cout << "Error opening file for reading." << endl;
        return;
    }

    string line;
    cout << "Contents of file:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}