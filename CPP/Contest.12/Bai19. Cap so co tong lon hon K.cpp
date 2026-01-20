#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long count = 0;

    for (int i = 0; i < n; i++) {
        int target = k - a[i];
       
        auto it = upper_bound(a.begin() + i + 1, a.end(), target);
      
        count += a.end() - it;
    }

    cout << count << endl;

    return 0;
}
