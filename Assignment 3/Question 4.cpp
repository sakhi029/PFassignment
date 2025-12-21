#include <iostream>
#include <vector>

using namespace std;
const int row = 5;
const int col = 5;

void inputGrid(char grid[row][col]) {
    cout << "Enter the crossword grid (" << row << "x" << col << ")." << endl;
    cout << "Use letters for words and '#' for black blocks:" << endl;
    for (int i = 0; i < row; i++) {
        cout << "Row " << i << ": ";
        for (int j = 0; j < col; j++) {
            cin >> grid[i][j];
        }
    }
}

int counthorizontalwords(char grid[row][col], string &longest) {
    int count = 0;
    for (int i = 0; i < row; i++) {
        string currentWord = "";
        for (int j = 0; j < col; j++) {
            if (grid[i][j] != '#') {
                currentWord += grid[i][j];
            } 
            
            if (grid[i][j] == '#' || j == col - 1) {
                if (currentWord.length() >= 3) {
                    count++;
                    if (currentWord.length() > longest.length()) longest = currentWord;
                }
                currentWord = ""; 
            }
        }
    }
    return count;
}

int countverticalwords(char grid[row][col], string &longest) {
    int count = 0;
    for (int j = 0; j < col; j++) {
        string currentWord = "";
        for (int i = 0; i < row; i++) {
            if (grid[i][j] != '#') {
                currentWord += grid[i][j];
            }
            
            if (grid[i][j] == '#' || i == row - 1) {
                if (currentWord.length() >= 3) {
                    count++;
                    if (currentWord.length() > longest.length()) longest = currentWord;
                }
                currentWord = "";
            }
        }
    }
    return count;
}
int main() {
    char grid[row][col];
    string longestWord = "";
    
    inputGrid(grid);

    string longHoriz = "";
    string longVert = "";
    
    int hCount = counthorizontalwords(grid, longHoriz);
    int vCount = countverticalwords(grid, longVert);

    longestWord = (longHoriz.length() >= longVert.length()) ? longHoriz : longVert;

    cout << "--- CROSSWORD RESULTS ---" << endl;
    cout << "Horizontal words length >= 3: " << hCount << endl;
    cout << "Vertical words length >= 3: " << vCount << endl;
    cout << "Longest word found: " << longestWord << " (" << longestWord.length() << " letters)" << endl;

    return 0;
}