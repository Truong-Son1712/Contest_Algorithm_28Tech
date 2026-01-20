#include <iostream>
using namespace std;


int binarySearchDescending(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

       
        if (arr[mid] == x) {
            return 1;
        }

        if (arr[mid] < x) {
            return binarySearchDescending(arr, left, mid - 1, x);
        }

        return binarySearchDescending(arr, mid + 1, right, x);
    }

    return 0;
}

int main() {
    int N, X;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    cin >> X;

    cout << binarySearchDescending(arr, 0, N - 1, X) << endl;
    return 0;
}
