#include <iostream>
using namespace std;

const int MOD = 1000000007;

// Hàm tính giai thua modulo MOD
long long factorial(int x) {
    long long result = 1;
    for (int i = 2; i <= x; i++) {
        result = result * i % MOD;
    }
    return result;
}

// Hàm tính so to hop C(n, k) modulo MOD
long long binomialCoefficient(int n, int k) {
    if (k > n) return 0;
    long long num = factorial(n);
    long long den = factorial(k) * factorial(n - k) % MOD;

    // Tính modulo nghich dao cua denominator
    long long inv = 1, power = MOD - 2;
    while (power) {
        if (power % 2) inv = inv * den % MOD;
        den = den * den % MOD;
        power /= 2;
    }
    return num * inv % MOD;
}

int main() {
    int n, m;
    cin >> n >> m;

    // So cách chia là C(m+n-1, n-1)
    cout << binomialCoefficient(m + n - 1, n - 1) << endl;

    return 0;
}
