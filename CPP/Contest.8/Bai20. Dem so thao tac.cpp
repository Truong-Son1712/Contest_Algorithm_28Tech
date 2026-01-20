#include <iostream>
#include <algorithm>
using namespace std;

int minStepsToOne(int N) {
    if (N == 1) return 0;
    int steps = minStepsToOne(N - 1);
    if (N % 2 == 0) steps = min(steps, minStepsToOne(N / 2));
    if (N % 3 == 0) steps = min(steps, minStepsToOne(N / 3));
    return steps + 1;
}

int main() {
    int N;
    cin >> N;
    cout << minStepsToOne(N) << endl;
    return 0;
}
