#include <iostream>
using namespace std;
char cinema[3][4] = {
    {'F', 'F', 'F', 'F'},
    {'F', 'F', 'F', 'F'},
    {'F', 'F', 'F', 'F'}
};
void menu(){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "(" << (i + 1) << "-" << (j + 1) << " " << cinema[i][j] << ") ";
        }
        cout << endl;
    }
}
void booking(){
    int row, column;
    while(true){
        cout << "Please enter the Row (1-3) and Column (1-4) OR press 0 0 to Exit: ";
        cin >> row >> column;
        if (row == 0 || column == 0) {
        break;
        }
        if (row >= 1 && row <= 3 && column >= 1 && column <= 4){
            if (cinema[row - 1][column - 1] == 'F'){
                cinema[row - 1][column - 1] = 'R';
                cout << "You have successfully reserved the seat " << row << "-" << column << endl; 
            }else{
                cout << "Seat Not Available For " << row << "-" << column << endl; 
            }
        } else{
            cout << "Wrong Input " << endl;
        }
    }
}
void newmenu(){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "(" << (i + 1) << "-" << (j + 1) << " " << cinema[i][j] << ") ";
        }
        cout << endl;
    }
}
int main() {
    menu();
    booking();
    newmenu();
    return 0;
}