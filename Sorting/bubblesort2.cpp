#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int size,i,j,temp;
cout<<"enter size of array"<<endl;
cin>>size;
cout<<"enter elements of array"<<endl;
for(i=0;i<size;i++)
{cin>>a[i];}

for(i=0;i<size;i++)
{
 cout<<a[i]; 
}
cout<<endl;
for(j=0;j<size;j++)
{
for(i=0;i<size;i++)
 {
   if(a[i]>a[i+1])
    {
        temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;

    }
 }
} 
cout<<"sorted array is"<<endl;
for(i=0;i<size;i++)
{
    cout<<a[i];
}
return 0;
}    