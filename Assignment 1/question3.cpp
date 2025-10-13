#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    //declared three variables.
    cout<<"Enter Three Numbers"<<endl;
    cin>>x>>y>>z;
    //taking input from user.
    if(x>y && x>z)
        cout<<"The Largest Number is "<<x<<endl;
    else if(y>x && y>z)
        cout<<"The Largest Number is "<<y<<endl;
    else if(z>x && z>y)
        cout<<"The Largest Number is "<<z<<endl;
    else
        cout<<"All Numbers Are Equal"<<endl;
    if(x<y && x<z)
        cout<<"The Smallest Number is "<<x<<endl;
    else if(y<x && y<z)
        cout<<"The Smallest Number is "<<y<<endl;
    else if(z<x && z<y)
        cout<<"The Smallest Number is "<<z<<endl;
    //used condition to determine the largest and smallest number among three numbers or whether all are equal.
        return 0;
}