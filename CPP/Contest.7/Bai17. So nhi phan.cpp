#include <iostream>
#include <vector>

using namespace std;

vector<char> convert_number(long long n) {
    vector<char> bin(64, '0'); // Initialize with 64 zeros
    for (int i = 63; i >= 0; --i) {
        if (n & (1LL << i)) {
            bin[63 - i] = '1'; // Set the corresponding bit to '1'
        }
    }
    return bin;
} 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for (vector<char>::iterator it=bin.begin();it!=bin.end();it++) {
            cout << *it;
        }
        cout << endl;
    }
    return 0;
}
