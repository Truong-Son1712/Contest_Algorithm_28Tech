#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arrivals(n);
    vector<int> departures(n);

    for (int i = 0; i < n; ++i) {
        cin >> arrivals[i] >> departures[i];
    }

    sort(arrivals.begin(), arrivals.end());
    sort(departures.begin(), departures.end());

    int maxCustomers = 0;
    int currentCustomers = 0;
    int i = 0, j = 0;

    while (i < n && j < n) {
        if (arrivals[i] < departures[j]) {
            currentCustomers++;
            maxCustomers = max(maxCustomers, currentCustomers);
            i++;
        } else {
            currentCustomers--;
            j++;
        }
    }

    cout << maxCustomers << endl;

    return 0;
}
