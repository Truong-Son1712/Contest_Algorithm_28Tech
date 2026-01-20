#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    long long count = 0;
    int left = 0;
    int right = n - 1;
    while (left < right) {
        if (arr[left] + arr[right] < k) {
            count += right - left;
            left++;
        } else {
            right--;
        }
    }

    cout << count << endl;

    return 0;
}
