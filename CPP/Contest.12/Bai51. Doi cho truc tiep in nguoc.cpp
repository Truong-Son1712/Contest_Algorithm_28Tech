#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void printStep(int step, const vector<int>& arr) {
    cout << "Step " << step << " : ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    
    vector<vector<int>> steps;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
        steps.push_back(arr);
    }

    
    for (int i = steps.size() - 1; i >= 0; --i) {
        printStep(i + 1, steps[i]);
    }

    return 0;
}
