#include <iostream>
#include <vector>
#define MOD 1000000007

using namespace std;


long long power(long long x, long long y, long long p) {
    long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}


void computeFactorials(int maxN, vector<long long> &fact, vector<long long> &invFact) {
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= maxN; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    invFact[maxN] = power(fact[maxN], MOD - 2, MOD);
    for (int i = maxN - 1; i >= 0; i--) {
        invFact[i] = invFact[i + 1] * (i + 1) % MOD;
    }
}


long long binomialCoefficient(int n, int k, const vector<long long> &fact, const vector<long long> &invFact) {
    if (k > n || k < 0) return 0;
    return fact[n] * invFact[k] % MOD * invFact[n - k] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;

    vector<pair<int, int>> queries(T);
    int maxN = 0;
    
    for (int i = 0; i < T; ++i) {
        cin >> queries[i].first >> queries[i].second;
        if (queries[i].first > maxN) {
            maxN = queries[i].first;
        }
    }

    vector<long long> fact(maxN + 1);
    vector<long long> invFact(maxN + 1);


    computeFactorials(maxN, fact, invFact);

    for (int i = 0; i < T; ++i) {
        int N = queries[i].first;
        int K = queries[i].second;
        cout << binomialCoefficient(N, K, fact, invFact) << "\n";
    }

    return 0;
}
