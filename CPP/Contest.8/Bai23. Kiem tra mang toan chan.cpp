#include <iostream>
using namespace std;

bool allEven(int arr[], int N, int idx) {
    if (idx == N) {
        return true;
    }
    if (arr[idx] % 2 != 0) {
        return false;
    }
    return allEven(arr, N, idx + 1);
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    if (allEven(arr, N, 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
