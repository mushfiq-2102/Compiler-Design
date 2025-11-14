#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    bool isNumber = true;

    for (char c : input) {
        if (!isdigit(c)) {
            isNumber = false;
            break;
        }
    }

    if (isNumber)
        cout << "Numeric constant\n";
    else
        cout << "Not numeric\n";

    return 0;
}
