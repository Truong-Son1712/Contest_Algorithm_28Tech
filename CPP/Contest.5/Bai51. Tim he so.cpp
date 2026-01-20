#include <iostream>
#include <algorithm>

using namespace std;


long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


bool isBeautifulEquation(long long m, long long n, long long p) {

    if (gcd(m, n) != p) {
        return false;
    }
  
    if ((m % 2 == 0 && n % 2 == 0) || (m % 2 != 0 && n % 2 != 0)) {
        return true;
    }
    return false;
}

int main() {
    long long m, n, p;
    cin >> m >> n >> p;
    if (isBeautifulEquation(m, n, p)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
