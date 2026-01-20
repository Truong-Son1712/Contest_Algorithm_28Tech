#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        long long value = 1; 
        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            
            value = value * (i - j) / (j + 1);
            value %= MOD; 
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    printPascalTriangle(n);

    return 0;
}
