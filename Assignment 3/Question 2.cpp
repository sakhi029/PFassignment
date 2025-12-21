#include <iostream>
using namespace std;
void inputsales(int (&sales)[5][7], string (&days)[7], string (&product)[5]){
    for(int i=0; i<5; i++){
        cout << "Enter sales for " << product[i] << " " ;
        for(int j=0; j<7; j++){
            cout << "on " << days[j] <<" "; 
            cin >> sales[i][j];
        }
    }
}
void calculaterevenue(int (&sales)[5][7], double (&revenue)[5], string (&product)[5]){
    for(int i=0; i<5; i++){
        revenue[i]=0;
        for(int j=0; j<7; j++){
            revenue[i] += sales[i][j];
        }
    }
    for(int i=0; i<5; i++){
        cout << "weekly revenue for " << product[i] <<" is " << revenue[i] << endl;
    }
}
int findmaxproduct(double (&revenue)[5]){
    int max=0;
        for(int j=0; j<5; j++){
            if(revenue[j] > revenue[max]){
            max = j;
        }
     }
     return max;    
}
int findbestday(int (&sales)[5][7]){
    int bestDay = 0;
    int maxSales = 0;

    for (int j = 0; j < 7; j++) {
        int dayTotal = 0;
        for (int i = 0; i < 5; i++) {
            dayTotal += sales[i][j];
        }
        if (dayTotal > maxSales) {
            maxSales = dayTotal;
            bestDay = j;
        }
    }
    return bestDay;
}
int main()
{
    int sales[5][7];
    double revenue[5];
    string product[5]= {
        {"Product 1"},
        {"Product 2"},
        {"Product 3"},
        {"Product 4"},
        {"Product 5"}
    };
    string days[7]= {
        {"Monday"},
        {"Tuesday"},
        {"Wednesday"},
        {"Thursday"},
        {"Friday"},
        {"Saturday"},
        {"Sunday"}
    };
    inputsales(sales, days, product);
    calculaterevenue(sales, revenue, product);
    int maxproduct=findmaxproduct(revenue);
    int bestday=findbestday(sales);
    cout << "Product with Maximum Weekly Revenue: Product " << maxproduct + 1 << endl;
    cout << "best sales day overall is day: " << bestday + 1 <<endl;
    return 0;
}