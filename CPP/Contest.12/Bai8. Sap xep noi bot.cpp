#include <iostream>
using namespace std;

void bubbleSort(int arr[], int N) {
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
        cout << "Buoc " << i + 1 << ": ";
        for (int k = 0; k < N; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    bubbleSort(arr, N);

    return 0;
}
