#include <iostream>
#include <vector>
using namespace std;
void rotateCounterClockwise(int m, int n, const vector<vector<int>>& original) {
    vector<vector<int>> rotated(n, vector<int>(m));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            rotated[n - 1 - j][i] = original[i][j];
        }
    }
    cout << "Rotated Output: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    rotateCounterClockwise(rows, cols, matrix);

    return 0;
}