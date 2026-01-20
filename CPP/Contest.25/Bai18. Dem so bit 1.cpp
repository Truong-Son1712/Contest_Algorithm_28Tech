#include <iostream>
using namespace std;

long long countOnes(long long N, long long L, long long R, long long start, long long end) {
    if (N == 0) return 0;
    if (L > end || R < start) return 0;
    if (L <= start && end <= R) return N;

    long long mid = (start + end) / 2;
    long long leftCount = countOnes(N / 2, L, R, start, mid - 1);
    long long rightCount = countOnes(N / 2, L, R, mid + 1, end);
    long long midCount = (L <= mid && mid <= R) ? (N % 2) : 0;

    return leftCount + midCount + rightCount;
}

int main() {
    long long N, L, R;
    cin >> N >> L >> R;

    long long length = 1;
    long long temp = N;
    while (temp > 1) {
        length = length * 2 + 1;
        temp /= 2;
    }

    cout << countOnes(N, L, R, 1, length) << endl;
    return 0;
}
