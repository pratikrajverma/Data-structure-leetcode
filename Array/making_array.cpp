#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ,";
    }
return 0;
}