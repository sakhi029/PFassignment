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
    int row, col;
    while(true){
        cout << "To reserve a seat, please enter the Row (1-3) and Column (1-4) OR press 0 0 to Exit: ";
        cin >> row >> col;
        if (row == 0 || col == 0) {
        break;
        }
        if (row >= 1 && row <= 3 && col >= 1 && col <= 4){
            if (cinema[row - 1][col - 1] == 'F'){
                cinema[row - 1][col - 1] = 'R';
                cout << "You have successfully reserved " << row << "-" << col << endl; 
            }else{
                cout << "Seat Not Available For " << row << "-" << col << endl; 
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