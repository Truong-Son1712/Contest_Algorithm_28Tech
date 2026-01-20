#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1000000007;

// Hàm tính giai th?a modulo
long long factorial(long long n, vector<long long>& fact) {
    if (fact[n] != -1) return fact[n];
    if (n == 0 || n == 1) return fact[n] = 1;
    return fact[n] = (n * factorial(n - 1, fact)) % MOD;
}

// Hàm tính giai th?a ngý?c modulo
long long modInverse(long long a, long long mod) {
    long long m0 = mod, t, q;
    long long x0 = 0, x1 = 1;
    if (mod == 1) return 0;
    while (a > 1) {
        q = a / mod;
        t = mod;
        mod = a % mod, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}

// Hàm tính t? h?p modulo
long long binomialCoefficient(long long n, long long k, vector<long long>& fact) {
    if (k > n) return 0;
    return (fact[n] * modInverse(fact[k], MOD) % MOD * modInverse(fact[n - k], MOD) % MOD) % MOD;
}

// Hàm ki?m tra s? t?t
bool isGoodNumber(long long num, int a, int b) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != a && digit != b) return false;
        num /= 10;
    }
    return true;
}

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    vector<long long> fact(n + 1, -1);
    factorial(n, fact);

    long long result = 0;
    for (int i = 0; i <= n; ++i) {
        long long sum = a * i + b * (n - i);
        if (isGoodNumber(sum, a, b)) {
            result = (result + binomialCoefficient(n, i, fact)) % MOD;
        }
    }

    cout << result << endl;

    return 0;
}
