#include <iostream>
#include <iomanip>
using namespace std;
void entertemperature(int (&temp)[7][4], string (&days)[7]){
    for(int i = 0; i < 7; i++){
        cout << "enter 4 temperature readings in Celcius for " << days[i] << " ";
        for(int j = 0; j < 4; j++){
            cin >> temp[i][j];
        }
    }
}
void calculations(int (&temp)[7][4], double &average){
    int min = 1000, max = -1000, total = 0;
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 4; j++){
            if(temp[i][j] > max){
                max = temp[i][j];
            }
            if(temp[i][j] < min){
                min = temp[i][j];
            }
            total += temp[i][j];
        }
    }
    average = total / 28.0;
}
void display(int (&temp)[7][4], string (&days)[7], double &average){
    cout << "--------Weekly Temperature Report---------" << endl;
    cout << left << setw(12) << "Time Of Day" << ": " << right << setw(6) << "T1" << right << setw(6) << "T2" << right << setw(6) << "T3" << right << setw(6) << "T4"; 
    cout << endl;
    for(int i = 0; i < 7; i++){
        cout << left << setw(12) << days[i] << ": "; 
        for(int j = 0; j < 4; j++){
            cout << right << setw(6) << temp[i][j]; 
        }
        cout << endl; 
    }
    cout << "------------------------------------------" << endl;
    cout << "Average for 28 Days: " << fixed << setprecision(2) << average << endl; 
}
int main(){
    int temp[7][4];
    double average;
    string days[7] = {
        {"Monday"},
        {"Tuesday"},
        {"Wednesday"},
        {"Thursday"},
        {"Friday"},
        {"Saturday"},
        {"Sunday"}
    };
    entertemperature(temp, days);
    calculations(temp, average);
    display(temp, days, average);
    return 0;
}