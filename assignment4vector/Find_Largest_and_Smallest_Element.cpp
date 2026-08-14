#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter elements: ";
    for (int i = 0; i < vec.size(); i++) {
        cin >> vec[i];
    }

    int largest = vec[0];
    int smallest = vec[0];

    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > largest) {
            largest = vec[i];
        }

        if (vec[i] < smallest) {
            smallest = vec[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;

    return 0;
}