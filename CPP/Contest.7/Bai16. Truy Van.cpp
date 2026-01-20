#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<vector<int> > table(N);
    for (int i = 0; i < N; ++i) {
        int M;
        cin >> M;
        table[i].resize(M);
        for (int j = 0; j < M; ++j) {
            cin >> table[i][j];
        }
    }

    for (int i = 0; i < Q; ++i) {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        cout << table[x][y] << endl;
    }

    return 0;
}
