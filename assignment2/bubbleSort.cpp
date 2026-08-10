#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 5, 4, 3, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Size of array in bytes: " << sizeof(arr) << endl;
    cout << "Size of one element: " << sizeof(arr[0]) << endl;
    cout << "Length of array: " << size << endl;

    // Bubble Sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}