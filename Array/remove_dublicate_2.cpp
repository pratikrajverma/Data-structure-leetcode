#include<iostream>
using namespace std;
int main()
{
//enter your code

int arr[]={1,1,2,3,3,3,4,4,5,5};
int i=0;
int n=sizeof(arr)/sizeof(int);
while(i<n){
    int j=i+1;
    while(arr[i]==arr[j])
    {
        arr[j]=0;
        j++;
    }
    if(arr[i]!=arr[j])
    {
        i=j;
    }
}

for(int i=0;i<n;i++)
{
    cout<<arr[i];
}





return 0;
}