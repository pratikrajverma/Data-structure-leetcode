#include<iostream>
using namespace std;
int main()
{
//enter your code
int sum=0;
int arr[]={1,2,3,4};
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        sum=0;
        for(int k=i; k<=j; k++)
        {
            // cout<<arr[k];
            // find max subarrray
            sum=sum+arr[k];
        }
            cout<<sum;
        cout<<endl;
    }


}





return 0;
}