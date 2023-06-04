#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int size,i,data;
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

cout<<"enter data for searching"<<endl;
cin>>data;

for(i=0;i<size;i++)
{
if(a[i]==data)
{
    cout<<"element is found"<<endl;
    break;
}
if(i==size-1)
{
    cout<<"element is not found";
}
}
return 0;
}


