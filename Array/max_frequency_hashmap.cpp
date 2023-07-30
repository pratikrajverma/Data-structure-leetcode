#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
//enter your code
int arr[]={1,2,3,2,1,4,1,1,4,4,4,5,5,5,5,5,5};
int n=sizeof(arr)/sizeof(int);

unordered_map<int,int> map;
for(int i=0;i<n;i++)
{
    map[arr[i]]++;
}
int ele;
int maxc=0;
for(auto x:map)
{
    if(x.second>maxc)
    {
        ele=x.first;
        maxc=x.second;
    }
}
cout<<ele;





return 0;
}