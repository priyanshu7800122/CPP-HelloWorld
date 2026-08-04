#include <iostream>
using namespace std;
int main() {
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        int square = i * i;
        int sum = 0;

        while (square > 0) {
            sum += square % 10;
            square /= 10;
        }

        if (sum == i)
            cout << i << " ";
    }
    return 0;
}