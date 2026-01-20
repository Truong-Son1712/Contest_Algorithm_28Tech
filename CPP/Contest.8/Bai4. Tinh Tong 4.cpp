#include <iostream>
using namespace std;

int calculateS(int n) {
    if (n == 1) {
        return -1;
    } else if (n % 2 == 0) {
        return calculateS(n - 1) + n;
    } else {
        return calculateS(n - 1) - n;
    }
}

int main() {
    int n;
    cin >> n;
    int result = calculateS(n);
    cout << result << endl;
    return 0;
}
