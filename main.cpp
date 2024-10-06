#include <iostream>
#include "input.h"
using namespace std;
int main() {
    int value = prompt(0, 100, "Please enter a value:", "Your value is invalid");
    cout << "The value chosen by the user is " << value << endl;
    return 0;
}
