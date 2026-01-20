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

    vector<int> result;
    result.push_back(A[0]);

    for (int i = 1; i < N; ++i) {
        if (A[i] != A[i - 1]) {
            result.push_back(A[i]);
        }
    }

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
