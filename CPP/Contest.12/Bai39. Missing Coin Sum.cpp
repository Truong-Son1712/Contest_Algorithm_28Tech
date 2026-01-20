#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    long long result = 1; 

    for (int i = 0; i < n; ++i) {
        if (arr[i] > result) {
            break; 
        }
        result += arr[i];
    }

    cout << result << endl;

    return 0;
}
