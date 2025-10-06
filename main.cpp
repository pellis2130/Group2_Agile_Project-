#include <iostream>
#include "menu.h"
#include "writeFile.h"
#include "readFile.h"
#include "calculateOne.h"
#include "calculateTwo.h"

using namespace std;

int main() {
    int choice;
    do {
        choice = showMenu();
        switch (choice) {
            case 1:
                writeFile();
                break;
            case 2:
                readFile();
                break;
            case 3:
                calculateOne();
                break;
            case 4:
                calculateTwo();
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);

    return 0;
}