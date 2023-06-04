#include<iostream>
using namespace std;
int main()
{
//enter your codeint 
int arr[]={1,3,-4,5,-1,2};
int n=sizeof(arr)/sizeof(int);
int sum=0;
int maxi=arr[0];
for(int i=0;i<n;i++)
{
    sum=sum+arr[i];
    maxi=max(maxi,sum);
    if(sum<0)
    {
        sum=0;
    }
}
cout<<maxi;






return 0;
}