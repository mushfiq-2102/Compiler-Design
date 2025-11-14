#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    string ops = "+-*/%=";

    if (ops.find(ch) != string::npos)
        cout << ch << " is an operator.\n";
    else
        cout << ch << " is not an operator.\n";

    return 0;
}
