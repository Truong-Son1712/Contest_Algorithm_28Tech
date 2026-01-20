#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

   
    sort(A.begin(), A.end());

    long long result = 0;
    for (int i = 0; i < N; ++i) {
      
        result = (result + (1LL * A[i] * i) % MOD) % MOD;
    }

    cout << result << endl;

    return 0;
}
