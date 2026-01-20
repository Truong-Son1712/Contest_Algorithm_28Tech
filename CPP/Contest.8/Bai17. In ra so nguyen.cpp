#include <iostream>
using namespace std;


void printLeftToRight(unsigned long long n) {
    if (n == 0) return;
    printLeftToRight(n / 10);
    cout << n % 10 << " ";
}


void printRightToLeft(unsigned long long n) {
    if (n == 0) return;
    cout << n % 10 << " ";
    printRightToLeft(n / 10);
}

int main() {
    unsigned long long N;
    cin >> N;

    printLeftToRight(N);
    cout << endl;
    printRightToLeft(N);
    cout << endl;

    return 0;
}
