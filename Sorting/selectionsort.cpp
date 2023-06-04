#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int size,i,min,r;
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



for(r=0;r<size-1;r++)
{
        min=a[r];
        for(i=r+1;i<size;i++)
            {
                if(min>a[i])
                 min=a[i];
                
            }

        if(min!=a[r])
        {
            swap(a[min],a[r]);
        }

}

cout<<"array is "<<endl;
for(r=0;r<size;r++)
{ cout<<a[r]; }
return 0;
}