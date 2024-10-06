#include <iostream>
#include <limits>
#include <string>
using namespace std;

int prompt(int lower_bound = numeric_limits<int>::min(),
           int upper_bound = numeric_limits<int>::max(),
           const string& prompt_msg = "Please enter a value:",
           const string& error_msg = "Your value is invalid") {
    int value;

    while (true) {
        cout << prompt_msg << endl;
        cin >> value;
        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << error_msg << endl;
            continue;
        }
        if (value < lower_bound || value > upper_bound) {
            cout << error_msg << endl;
            continue;
        }
        break;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return value;
}
