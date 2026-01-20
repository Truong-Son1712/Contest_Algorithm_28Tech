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
        auto lower = lower_bound(a.begin() + i + 1, a.end(), target);
        auto upper = upper_bound(a.begin() + i + 1, a.end(), target);

   
        count += (upper - lower);
    }

    cout << count << endl;

    return 0;
}
