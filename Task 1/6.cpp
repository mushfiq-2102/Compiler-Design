#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int nums[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int smallest = nums[0];
    int largest = nums[0];

    for (int i = 1; i < n; i++) {
        smallest = min(smallest, nums[i]);
        largest = max(largest, nums[i]);
    }

    cout << "Minimum = " << smallest << endl;
    cout << "Maximum = " << largest << endl;
    return 0;
}
