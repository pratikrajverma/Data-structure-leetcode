#include<bits/stdc++.h>
// #include <iostream>
using namespace std;
int merge(int a[],int left,int right)
{
    int pivot=left;
    while(left<right){
  while(a[pivot]>a[right]){
        swap(a[pivot],a[right]);
        pivot = right;
        right--;
    }
    while(a[pivot]<a[left])
    {
        swap(a[pivot],a[left]);
        pivot=left;
        left++;
        
    }
    left++;
    }
    return pivot;
    
}
void mergesort(int a[],int left,int right)
{
    if(left<right)
    {
        int p=merge(a,left,right);//store pivot value 
        mergesort(a,p+1,right);
        mergesort(a,left,p-1);
    }
}
int main()
{
    int a[6]={24,9,29,14,19,27};
    merge(a,0,5);
    for(int i=0;i<6;i++)
    {cout<<a[i]<<endl;}
    return 0;
}