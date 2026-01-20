#include <iostream>
using namespace std;

// Hàm m? r?ng Euclid ð? t?m ngh?ch ð?o modulo
long long extendedGCD(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long gcd = extendedGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

// Hàm t?m s? m nh? nh?t th?a m?n (a * m) % b = 1
long long findMinM(long long a, long long b) {
    long long x, y;
    long long gcd = extendedGCD(a, b, x, y);
    if (gcd != 1) {
        return -1; // Không t?m ðý?c m
    }
    // Ð?m b?o x là s? nguyên không âm
    x = (x % b + b) % b;
    return x;
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << findMinM(a, b) << endl;
    return 0;
}
