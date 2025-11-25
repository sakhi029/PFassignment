#include <iostream>
using namespace std;
int main()
{
    int N,a=0,b=1,c;
    cout<<"Enter the number of sequence for Fibonacci Series"<<endl;
    cin>>N;
    cout<<"Fibonacci Series: "<<endl;
    for(int i=0;i<=N;i++)
    {
        c=a+b;
        cout<<a<<" ";
        a=b;
        b=c;
    }
    return 0;
}