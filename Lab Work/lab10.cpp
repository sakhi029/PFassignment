#include <iostream>
using namespace std;
int main()
{
    int arr[2][2]={{2,3},{4,6}};
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int arr2[2][2]={{5,7},{1,7}};
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    int resultArray[2][2];
    cout<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            resultArray[i][j]=0;
            for(int k=0; k<2; k++){
                resultArray[i][j]+=(arr[i][k]*arr2[k][j]);
            }
        }
        cout<<endl;
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<resultArray[i][j]<<" ";
        }
        cout<<endl;
}
        return 0;
}