#include <iostream>
using namespace std;

int main() {
    int nums[5];

    cout << "Enter the 5 numbers: ";

    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    int largest = nums[0];
    int smallest = nums[0];

    for (int i = 1; i < 5; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }

        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;

    return 0;
}