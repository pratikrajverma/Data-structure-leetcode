#include<iostream>
using namespace std;
int main()
{
//enter your code
int n;
cin>>n;
int i=1;
while(i<=n)
{
    int j=1;
    while(j<=n-i)
    {
        cout<<' ';
        j++;
    }
    
    j=1;
    while(j<=i)
    {
        if(j==1 || j==i)
        {
            cout<<"1 ";
        }else{
            cout<<"2 ";
        }
            j++;
    }
    cout<<endl;
    i++;
}





return 0;
}