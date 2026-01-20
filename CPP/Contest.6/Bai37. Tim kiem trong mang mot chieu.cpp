#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<bool> isPresent(10000001, false);

    for (int i = 0; i < N; ++i) {
        isPresent[A[i]] = true;
    }

    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        if (X >= 0 && X <= 10000000 && isPresent[X]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
