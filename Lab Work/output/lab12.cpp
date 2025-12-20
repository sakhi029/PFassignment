#include <iostream>
#include <vector>
using namespace std;
struct student{
    string name;
    string rollnumber;
    int batch;
    char section;
    bool isEnrolled;
};

student inputStudent(){
    student s;
    cout<<"enter name : ";
    cin>>s.name;
    cout<<"enter rollnumber : ";
    cin>>s.rollnumber;
    cout<<"enter batch : ";
    cin>>s.batch;
    cout<<"enter section: ";
    cin>>s.section;
    cout<<"is enrolled? ";
    cin>>s.isEnrolled;
    return s;    
}

void outputStudent(student s){
    cout<<"name : "<<s.name<<endl;
    cout<<"rollnumber : "<<s.rollnumber<<endl;
    cout<<"batch : "<<s.batch<<endl;
    cout<<"section : "<<s.section<<endl;
    cout<<"is enrolled : "<<s.isEnrolled<<endl<<endl;
}
int main() 
{
   
    for(int i=0; i<3; i++){
        student.push_back(inputStudent());
    }
    for(student s: students){
        outputStudent(s);      
    }
    return 0;
}