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

// Hàm tính h? s? ða th?c modulo
long long multinomialCoefficient(vector<int>& freq, vector<long long>& fact) {
    long long n = 0;
    for (int f : freq) n += f;
    long long result = factorial(n, fact);
    for (int f : freq) {
        if (f > 0) {
            result = (result * modInverse(factorial(f, fact), MOD)) % MOD;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> freq(4);
    for (int i = 0; i < 4; ++i) {
        cin >> freq[i];
    }

    // Tính giai th?a và giai th?a ngý?c modulo
    vector<long long> fact(n + 1, -1);
    factorial(n, fact);

    cout << multinomialCoefficient(freq, fact) << endl;

    return 0;
}
