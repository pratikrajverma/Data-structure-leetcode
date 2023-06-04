#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int size,i,min;
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

min=a[0];
for(i=1;i<size;i++)
{
  if(min>a[i])
  min=a[i];
}
  
cout<<"smallest element is "<<min;
return 0;
}
