#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    for(int i = 0 ; i < size / 2 ; i++)
    {
        swap(arr[i], arr[size - 1 - i]);
    }
}
int main()
{
    int arr[6];
    for(int i = 0; i < 6 ; i++)
    {
        cout<<"Enter "<<i+1<<" number ";
        cin>>arr[i];
    }
    int size= sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}