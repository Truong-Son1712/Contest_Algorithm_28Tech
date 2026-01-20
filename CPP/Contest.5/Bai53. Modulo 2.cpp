#include <iostream>
using namespace std;

const long long MOD = 1000000007;

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

// Hàm t?m s? b nh? nh?t th?a m?n (a * b) % m = 1
long long findMinB(long long a, long long m) {
    long long x, y;
    long long gcd = extendedGCD(a, m, x, y);
    if (gcd != 1) {
        return -1; // Không t?m ðý?c b
    }
    // Ð?m b?o x là s? nguyên dýõng
    x = (x % m + m) % m;
    return x;
}

int main() {
    long long a;
    cin >> a;
    cout << findMinB(a, MOD) << endl;
    return 0;
}
