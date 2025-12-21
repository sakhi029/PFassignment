#include <iostream>
#include <vector>

using namespace std;

void printSnakePattern(int n, const vector<vector<int>>& mat) {
    cout << "Output: ";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
        } 
        else {
            for (int j = n - 1; j >= 0; j--) {
                cout << mat[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the n x n matrix: ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    printSnakePattern(n, mat);

    return 0;
}