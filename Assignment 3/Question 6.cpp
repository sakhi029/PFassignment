#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sortAllWay(int n, vector<vector<int>>& matrix) {
    vector<int> temp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp.push_back(matrix[i][j]);
        }
    }
    sort(temp.begin(), temp.end());

    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = temp[k++];
        }
    }
}

void displayMatrix(int n, const vector<vector<int>>& matrix) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the order of square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter " << n * n << " distinct elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    sortAllWay(n, matrix);

    cout << " Matrix after all-way sorting: ";
    displayMatrix(n, matrix);
    
    return 0;
}