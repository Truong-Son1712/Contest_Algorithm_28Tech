#include <iostream>
using namespace std;

void sumDigits(unsigned long long n, int &sumEven, int &sumOdd) {
    if (n == 0) return;
    int lastDigit = n % 10;
    if (lastDigit % 2 == 0) {
        sumEven += lastDigit;
    } else {
        sumOdd += lastDigit;
    }
    sumDigits(n / 10, sumEven, sumOdd);
}

int main() {
    unsigned long long N;
    cin >> N;
    int sumEven = 0, sumOdd = 0;
    sumDigits(N, sumEven, sumOdd);
    cout << sumEven << endl;
    cout << sumOdd << endl;
    return 0;
}
