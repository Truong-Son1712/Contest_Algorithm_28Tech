#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;

int main() {
    int n;
    cin >> n;
    
    vector<int> freq(MAX + 1, 0);

 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }


    for (int g = MAX; g >= 1; g--) {
        int count = 0;
        for (int multiple = g; multiple <= MAX; multiple += g) {
            count += freq[multiple];
            if (count >= 2) {
                cout << g << endl;
                return 0;
            }
        }
    }

    return 0;
}
