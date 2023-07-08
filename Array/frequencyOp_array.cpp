#include<iostream>
using namespace std;
int main()
{
//enter your code

int arr[]={1,2,3,3,2,2,1,1,1,3,3,3,3};
int maxi=0;
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++)
{
    int count=0;
    for(int j=i;j<n;j++)
    {
        if(arr[i]==arr[j])
        count++;

    }
    maxi=max(maxi,count);
}
cout<<maxi;




return 0;
}