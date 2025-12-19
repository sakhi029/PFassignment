#include <iostream>
using namespace std;
void weather(int (&temp[7][4])){
    int temp[7][4];
    string days[7]={
        {"Monday"},
        {"Tuesday"},
        {"Wednesday"},
        {"Thursday"},
        {"Friday"},
        {"Saturday"},
        {"Sunday"}
    };
    for(int i=0; i<7; i++){
        cout<<"enter temperature for "<< days[i];
        for(int j=0; j<4; j++){
            cin >> temp[i][j];
        }
    }
}
void temperature(int (&temp[7][4])){
    int max=0;
    int min=1000;
    for(int i=0; i<7; i++){
        for(int j=0; j<4; j++){
            if(temp[i][j] > max){
                max = temp[i][j];
            }
            if(temp[i][j] < min){
                min= temp[i][j];
            }
        }
    }
}
int main()
{
    int temp[7][4];
    weather(temp);
    temperature(temp);
    return 0;
}