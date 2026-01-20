#include <iostream>
using namespace std;

// Hàm ð? quy ki?m tra m?ng có ph?i là m?ng tãng d?n hay không
bool isIncreasing(int arr[], int N, int idx) {
    if (idx == N - 1) {
        return true;
    }
    if (arr[idx] >= arr[idx + 1]) {
        return false;
    }
    return isIncreasing(arr, N, idx + 1);
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    if (isIncreasing(arr, N, 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
