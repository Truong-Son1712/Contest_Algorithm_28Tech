#include <iostream>
using namespace std;

bool canRepresent(int n) {
    for (int i = 0; i <= n / 11; ++i) {
        if ((n - 11 * i) % 111 == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    if (canRepresent(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
