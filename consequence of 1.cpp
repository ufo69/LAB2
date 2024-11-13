#include <iostream>
using namespace std;

int main() {
    long long number;
    int consecutiveCount = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0 && consecutiveCount < 6) {
        consecutiveCount = (number % 10 == 1) ? consecutiveCount + 1 : 0;
        number /= 10;
    }

    cout << (consecutiveCount == 6 ? "Yes" : "No") << endl;
    return 0;
}
