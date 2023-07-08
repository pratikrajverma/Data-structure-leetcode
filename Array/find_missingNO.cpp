#include<iostream>
#include<vector>
using namespace std;
int main()
{
//enter your code

int arr[]={2,3,1,8,2,3,5,1};
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++)
{
    while(arr[i]!=arr[arr[i]-1])
    {
        swap(arr[i],arr[arr[i]-1]);
    }

}
vector<int> v;
for(int i=0;i<n;i++)
{
    if(arr[i]!=i+1)
    {
        v.push_back(i+1);
    }
}

for(int i=0;i<v.size();i++)
{
   cout<< v[i];
}



return 0;
}