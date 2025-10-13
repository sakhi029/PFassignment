#include<iostream>
using namespace std;
int main()
{
    int x,y;
    //declared two variables.
    cout<<"First Number= ";
    cin>>x;
    cout<<"Second Number= ";
    cin>>y;
    //taking input from user.
    x=x+y;
    y=x-y;
    x=x-y;
    //used arithmetic operators to swap values.
    cout<<"First Number= "<<x<<endl<<"Second Number= "<<y;
    return 0;
}