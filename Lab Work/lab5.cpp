#include <iostream>
using namespace std;
int main()
{
    string name;
    std::string password="Python123";
    do{
        cout<<"Enter Password"<<endl;
        cin>>name;
        if(name==password){
            break;
        }else{
            continue;
        }
    }while(true);
    return 0;
}