#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] != 0) {
            vec[index] = vec[i];
            index++;
        }
    }
    while (index < n) {
        vec[index] = 0;
        index++;
    }
    cout << "After moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    return 0;
}