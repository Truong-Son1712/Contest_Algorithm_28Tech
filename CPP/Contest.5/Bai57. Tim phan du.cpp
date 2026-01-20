#include <iostream>
using namespace std;

const long long MOD = 1000000007;

// Hàm tính l?y th?a nh? phân (modular exponentiation)
long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Hàm tính ngh?ch ð?o modulo
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

int main() {
    long long A, B, C, M;
    cin >> A >> B >> C >> M;

    // Tính A^B % M
    long long power = modExp(A, B, M);

    // Tính (A^B / C) % M
    long long result = (power * modInverse(C, M)) % M;

    cout << result << endl;
    return 0;
}
