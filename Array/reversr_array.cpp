#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,2,4,7,1};
    int n=sizeof(arr)/sizeof(int);
    

    int i=0;
    while(i<n/2)
    {
       
        swap(arr[i],arr[n-1-i]);
        i++;
    }

    //print
    for(int i=0;i<5 ;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}




