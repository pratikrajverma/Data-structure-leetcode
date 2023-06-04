#include<iostream>
using namespace std;
int partion(int[],int,int);
void Quicksort(int[],int,int);


int partion( int a[],int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;

    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }

        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a[start],a[end]);
        }

    }
        swap(a[lb],a[end]);
        return end;
}

void Quicksort(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc=partion(a,lb,ub);
        Quicksort(a, lb, loc-1);
        Quicksort(a, loc+1,ub);
    }
    
}



int main()
{
   
    int a[10];
    int i,size;
 cout<<"enter size of array"<<endl;
 cin>>size;
 cout<<"enter elements of array"<<endl;
 for(i=0;i<size;i++)
 {cin>>a[i];}

 for(i=0;i<size;i++)
 { cout<<a[i]; }
 cout<<endl;

 
 
 Quicksort(a,0,4);

    cout<<"sorted array by quick sort"<<endl;
 
  for(i=0;i<size;i++)
 
      { cout<<a[i]; }
 
 return 0;
} 

