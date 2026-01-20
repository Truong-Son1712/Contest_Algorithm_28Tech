#include <iostream>
using namespace std;

void printHex(unsigned long long n) {
    if (n > 0) {
        printHex(n / 16);
        int digit = n % 16;
        if (digit < 10) {
            cout << digit;
        } else {
            cout << char('A' + digit - 10);
        }
    }
}

int main() {
    unsigned long long N;
    cin >> N;
    if (N == 0) {
        cout << "0" << endl;
    } else {
        printHex(N);
        cout << endl;
    }
    return 0;
}
