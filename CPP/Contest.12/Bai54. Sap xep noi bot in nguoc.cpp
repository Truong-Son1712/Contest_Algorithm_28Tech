#include <iostream>
#include <vector>
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

 
    bool swapped;
    for (int i = 0; i < N - 1; ++i) {
        swapped = false;
        for (int j = 0; j < N - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
  
        steps.push_back(arr);
      
        if (!swapped) {
            break;
        }
    }

 
    for (int i = steps.size() - 1; i >= 0; --i) {
        printStep(i + 1, steps[i]);
    }

    return 0;
}
