#include <iostream>
using namespace std;

bool allEvenDigits(unsigned long long n) {
    if (n == 0) {
        return true;
    }
    int lastDigit = n % 10;
    if (lastDigit % 2 != 0) {
        return false;
    }
    return allEvenDigits(n / 10);
}

int main() {
    unsigned long long N;
    cin >> N;
    if (allEvenDigits(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
