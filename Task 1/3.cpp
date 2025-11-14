#include <iostream>
using namespace std;

int main() {
    string line;
    cout << "Enter a line: ";
    getline(cin, line);

    if (line.rfind("//", 0) == 0) {
        cout << "Single line comment\n";
    }
    else if (line.size() >= 4 &&
             line.substr(0, 2) == "/*" &&
             line.substr(line.size() - 2) == "*/") {
        cout << "Multi line comment\n";
    }
    else {
        cout << "Not a comment\n";
    }

    return 0;
}
