#include <iostream>
using namespace std;

void selectionSort(int arr[], int N) {
    for (int i = 0; i < N - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < N; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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

    selectionSort(arr, N);

    return 0;
}
