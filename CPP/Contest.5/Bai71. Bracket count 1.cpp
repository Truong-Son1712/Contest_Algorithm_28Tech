#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Hàm tính (a^b) % MOD
long long power(long long a, long long b, long long MOD) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

// Hàm tính giai th?a modulo MOD
long long factorial(long long n, long long MOD) {
    long long result = 1;
    for (long long i = 2; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    return result;
}

// Hàm tính s? Catalan th? n modulo MOD
long long catalan(long long n, long long MOD) {
    if (n == 0) return 1;
    long long num = factorial(2 * n, MOD);
    long long denom = (factorial(n + 1, MOD) * factorial(n, MOD)) % MOD;
    return (num * power(denom, MOD - 2, MOD)) % MOD;
}

int main() {
    int n;
    cin >> n;
    cout << catalan(n / 2, MOD) << endl;
    return 0;
}
