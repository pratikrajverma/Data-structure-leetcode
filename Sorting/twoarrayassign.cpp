#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int b[10],i,k;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<10;i++)
    {  cin>>a[i];  }
    for(i=0;i<10;i++)
    {  b[i]=a[i]; }
    for (k=0;k<10;k++)
    { cout<<b[k]; }
    return 0;
}