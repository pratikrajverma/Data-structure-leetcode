#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int size,i,max;
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

max=a[0];
i=1;
while(i!=size)
{
  if(max<a[i])
  {  max=a[i]; }
  i++;
}
  
cout<<"maximum element is "<<max;
return 0;
}

