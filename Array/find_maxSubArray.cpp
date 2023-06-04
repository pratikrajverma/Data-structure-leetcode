#include<iostream>
using namespace std;
int main()
{
//enter your code
int sum=0;
int arr[]={5,4,-1,7,-8};
int n=sizeof(arr)/sizeof(int);
int max;
max=arr[0];
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        sum=0;
        for(int k=i; k<=j; k++)
        {
            
            // find max subarrray
            sum=sum+arr[k];
        
        }

        if(sum>max)
        {
            max=sum;
        }
        cout<<endl;
    }


}
cout<<max;





return 0;
}