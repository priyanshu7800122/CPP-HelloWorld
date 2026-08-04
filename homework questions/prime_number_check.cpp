#include <iostream>
using namespace std;
int main() {
    int n;
    bool prime = true;
    cin >> n;
    if (n <= 1)
        prime = false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }
    if (prime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}