#include <iostream>
using namespace std;

int main() {
    string id;
    cout << "Enter identifier: ";
    cin >> id;

    if (!isalpha(id[0]) && id[0] != '_') {
        cout << "Invalid identifier\n";
        return 0;
    }

    for (int i = 1; i < id.length(); i++) {
        if (!(isalnum(id[i]) || id[i] == '_')) {
            cout << "Invalid identifier\n";
            return 0;
        }
    }

    cout << "Valid identifier\n";
    return 0;
}
