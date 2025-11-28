#include <iostream>
using namespace std;
int attempWithdraw(int balance, int amount)
{
    if(balance > amount){
        balance=balance-amount;
    }
    else{
        cout<<"error"<<endl;
    }
    return balance;
}
int main()
{
    int balance,amount,newbalance;
    cout<<"enter balance"<<endl;
    cin>>balance;
    do{
        cout<<"enter withdaw amount"<<endl;
        cin>>amount;
        newbalance= attempWithdraw(balance, amount);
        cout<<"new balance = "<<newbalance<<endl;
        cout<<"banace in main = "<<balance<<endl;
    }while(true);
    return 0;
}