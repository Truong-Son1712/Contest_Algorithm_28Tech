#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long MOD = 1e9 + 7;

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

long long findKthSpecialNumber(long long N, long long K) {
    long long result = 0;
    long long power = 1;
    while (K > 0) {
        if (K % 2 == 1) {
            result = (result + power) % MOD;
        }
        power = (power * N) % MOD;
        K /= 2;
    }
    return result;
}

int main() {
    long long N, K;
    cin >> N >> K;
    cout << findKthSpecialNumber(N, K) << endl;
    return 0;
}
