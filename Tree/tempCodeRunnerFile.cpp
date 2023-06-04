#include<iostream>
using namespace std;
void array(int a[])
{
    a[4]=10;
    a[0]=22;
}
int main()
{  int i;
   int a[5]={4,3,2,7,8}; 
   array(a);
   for(i=0;i<5;i++)
   {  cout<<a[i]<<endl; }
   return 0;
}   