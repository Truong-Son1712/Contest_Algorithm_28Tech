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


    for (int i = 1; i < N; ++i) {
        int key = arr[i];
        int j = i - 1;

       
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

      
        steps.push_back(arr);
    }

    
    for (int i = steps.size() - 1; i >= 0; --i) {
        printStep(i + 1, steps[i]);
    }

    return 0;
}
