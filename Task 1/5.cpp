#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    int arr[100];
    cout << "Enter values: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int total = 0;
    for (int x : arr)
        total += x;

    float avg = (float)total / n;

    cout << "Average = " << avg << endl;
    return 0;
}
