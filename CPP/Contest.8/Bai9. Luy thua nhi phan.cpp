#include <iostream>
using namespace std;

const int MOD = 1000000007;


long long power(long long a, long long b) {
    if (b == 0) {
        return 1;
    }
    long long half = power(a, b / 2) % MOD;
    long long result = (half * half) % MOD;
    if (b % 2 == 1) {
        result = (result * a) % MOD;
    }
    return result;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long result = power(a, b);
    cout << result << endl;

    return 0;
}
