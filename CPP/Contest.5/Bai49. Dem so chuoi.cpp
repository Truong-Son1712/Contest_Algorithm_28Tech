#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MOD = 1000000007;
const int MAXN = 1000000;

// M?ng lýu giá tr? giai th?a và ngh?ch ð?o giai th?a
vector<long long> fact(MAXN + 1), invFact(MAXN + 1);

// Hàm tính giai th?a và ngh?ch ð?o giai th?a
void precomputeFactorials() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        fact[i] = fact[i-1] * i % MOD;
    }
    invFact[MAXN] = 1;
    long long power = fact[MAXN];
    int exp = MOD - 2;
    while (exp) {
        if (exp % 2) invFact[MAXN] = invFact[MAXN] * power % MOD;
        power = power * power % MOD;
        exp /= 2;
    }
    for (int i = MAXN - 1; i >= 1; i--) {
        invFact[i] = invFact[i+1] * (i+1) % MOD;
    }
}

int main() {
    precomputeFactorials();
    string s;
    cin >> s;
    
    // Ð?m s? l?n xu?t hi?n c?a t?ng k? t?
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }
    
    // Tính s? lý?ng hoán v? khác nhau
    long long result = fact[s.length()];
    for (int f : freq) {
        if (f > 0) {
            result = result * invFact[f] % MOD;
        }
    }

    cout << result << endl;
    return 0;
}
