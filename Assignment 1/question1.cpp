#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  float a,b,sum,diff,pro,quo;
  //declared variables to store two values and their sum,difference,product and quotient.
  cout<<"Enter Two Numbers"<<endl;
  cin>>a>>b;
  //taking input from user.
  sum=a+b;
  diff=a-b;
  pro=a*b;
  quo=a/b;
  cout<<fixed<<setprecision(3);
  cout<<"Arithematic Operations in float"<<endl;
  cout<<endl;
  cout<<"Sum of two numbers= "<<sum<<endl<<"Difference of two numbers= "<<diff<<endl<<"Product of two numbers= "<<pro<<endl<<"Quotient of two numbers= "<<quo<<endl;
  //we have displayed output in the same data type as input with three decimal places.
  int x=(int)a;
  int y=(int)b;
   int sum1=x+y;
    int diff1=x-y;
    int pro1=x*y;
    int quo1=x/y;
    //we have declared integer type variables to store values in int
    cout<<endl;
    cout<<"Arithematic Operations in int"<<endl;
    cout<<endl;
    cout<<"Sum of two numbers= "<<sum1<<endl<<"Difference of two numbers= "<<diff1<<endl<<"Product of two numbers= "<<pro1<<endl<<"Quotient of two numbers= "<<quo1<<endl;
    //we have displayed the output with integer data type so the decimal will be removed automatically.
  return 0;

}