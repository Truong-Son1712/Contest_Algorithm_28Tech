#include <iostream>
using namespace std;

void printBinary(unsigned long long n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    cout << (n % 2);
}

int main() {
    unsigned long long N;
    cin >> N;
    printBinary(N);
    cout << endl;
    return 0;
}
