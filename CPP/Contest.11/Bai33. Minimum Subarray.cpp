#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int left = 0, right = 0;
    long long sum = 0;
    int minLength = N + 1; 

    while (right < N) {
        sum += A[right];

        while (sum >= K) {
            if(sum==K){
                minLength = min(minLength, right - left + 1);
            }
            sum -= A[left];
            ++left;
        }

        ++right;
    }

    if (minLength == N + 1) {
        cout << -1 << endl; 
    } else {
        cout << minLength << endl;
    }

    return 0;
}
