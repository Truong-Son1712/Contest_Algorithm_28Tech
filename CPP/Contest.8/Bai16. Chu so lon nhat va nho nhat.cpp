#include <iostream>
using namespace std;


int findMaxDigit(unsigned long long n) {
    if (n == 0) return 0;
    return max((int)(n % 10), findMaxDigit(n / 10));
}


int findMinDigit(unsigned long long n) {
    if (n == 0) return 9;
    return min((int)(n % 10), findMinDigit(n / 10));
}

int main() {
    unsigned long long N;
    cin >> N;
    int maxDigit = findMaxDigit(N);
    int minDigit = findMinDigit(N);
    cout << maxDigit << " " << minDigit << endl;
    return 0;
}
