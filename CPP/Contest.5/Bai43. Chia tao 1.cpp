#include <iostream>
using namespace std;

const int MOD = 1000000007;
const int MAX = 1000;

// Mang luu tru các giá tri giai thua và giai thua nguoc modulo MOD
long long factorial[MAX + 1];
long long invFactorial[MAX + 1];

// Hàm tính giai thua modulo MOD
void precomputeFactorials() {
    factorial[0] = 1;
    for (int i = 1; i <= MAX; i++) {
        factorial[i] = factorial[i - 1] * i % MOD;
    }

    // Tính giai thua nguoc cho factorial[MAX]
    invFactorial[MAX] = 1;
    long long power = MOD - 2; // Su dung Fermat's Little Theorem de tính modulo inverse
    long long base = factorial[MAX];
    while (power) {
        if (power % 2) invFactorial[MAX] = invFactorial[MAX] * base % MOD;
        base = base * base % MOD;
        power /= 2;
    }

    // Tính giai thua nguoc cho các giá tri con lai
    for (int i = MAX - 1; i >= 0; i--) {
        invFactorial[i] = invFactorial[i + 1] * (i + 1) % MOD;
    }
}

// Hàm tính so to hop C(n, k) modulo MOD
long long binomialCoefficient(int n, int k) {
    if (k > n) return 0;
    return factorial[n] * invFactorial[k] % MOD * invFactorial[n - k] % MOD;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Tien xu ly giai thua và giai thua nguoc
    precomputeFactorials();

    // So cách chia là C(n-1, m-1)
    cout << binomialCoefficient(n - 1, m - 1) << endl;

    return 0;
}
