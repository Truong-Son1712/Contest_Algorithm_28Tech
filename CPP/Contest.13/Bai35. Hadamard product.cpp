#include <iostream>
#include <vector>
using namespace std;


void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}


vector<vector<int>> hadamardProduct(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {
    int n = mat1.size();
    int m = mat1[0].size();
    vector<vector<int>> product(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            product[i][j] = mat1[i][j] * mat2[i][j];
        }
    }

    return product;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> mat1(N, vector<int>(M));
    vector<vector<int>> mat2(N, vector<int>(M));


    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> mat1[i][j];
        }
    }


    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> mat2[i][j];
        }
    }

  
    vector<vector<int>> product = hadamardProduct(mat1, mat2);
    printMatrix(product);

    return 0;
}
