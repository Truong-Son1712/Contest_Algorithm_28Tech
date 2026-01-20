#include <iostream>
using namespace std;

void insertionSort(int arr[], int N) {
    for (int i = 1; i < N; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        cout << "Buoc " << i << ": ";
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

    insertionSort(arr, N);

    return 0;
}
