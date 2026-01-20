#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;
const long long PHI_MOD = 1e9 + 6; 


long long binpow(long long base, long long exp, long long mod) {
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

// Hàm tính a^(b^c) % MOD
long long solve(long long a, long long b, long long c) {
    if (a == 0) return 0;
    if (b == 0) return 1;
    if (c == 0) return a;


    long long exp = binpow(b, c, PHI_MOD);
    return binpow(a, exp, MOD);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) << endl;
    }
    return 0;
}
