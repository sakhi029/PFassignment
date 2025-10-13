#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int sub1,sub2,sub3,sub4,sub5,total,sum,perc;
    //declared variables to store marks,total,sum and percentage.
    cout<<"Enter marks of Subject1"<<endl;
    cin>>sub1;
    cout<<"Enter marks od Subject2"<<endl;
    cin>>sub2;
    cout<<"Enter marks of Subject3"<<endl;
    cin>>sub3;
    cout<<"Enter marks of Subject4"<<endl;
    cin>>sub4;
    cout<<"Enter marks of Subject5"<<endl;
    cin>>sub5;
    cout<<"Enter Total Marks"<<endl;
    cin>>total;
    //taking input from user.
    cout<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<left<<setw(10)<<"Subject1"<<right<<setw(10)<<sub1<<endl;
    cout<<left<<setw(10)<<"Subject2"<<right<<setw(10)<<sub2<<endl;
    cout<<left<<setw(10)<<"Subject3"<<right<<setw(10)<<sub3<<endl;
    cout<<left<<setw(10)<<"Subject4"<<right<<setw(10)<<sub4<<endl;
    cout<<left<<setw(10)<<"Subject5"<<right<<setw(10)<<sub5<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    sum=sub1+sub2+sub3+sub4+sub5;
    cout<<left<<setw(10)<<"Obtained Marks"<<right<<setw(10)<<sum<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    perc=(sum*100)/total;
    cout<<left<<setw(10)<<"Percentage"<<right<<setw(10)<<perc<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    //table is created which shows marks of student in a report card
    if(perc>=90)
        cout<<"A+"<<endl;
    else if(perc>=80)
        cout<<"A"<<endl;
    else if(perc>=70)
        cout<<"B"<<endl;
    else if(perc>=60)
        cout<<"C"<<endl;
    else if(perc>=50)
        cout<<"D"<<endl;
    else
        cout<<"F"<<endl;
        //displayed the grade according to the percentage. 
    cout<<"------------------------------------------------------"<<endl;
    string result = (perc>=50) ? "Passed":"Failed";
    cout<<"\nStudent is "<<result;
    //ternary operator is used to display pass or fail.
    return 0;
}