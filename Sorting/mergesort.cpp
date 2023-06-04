#include<iostream>
using namespace std;
void Mergesort(int[],int,int);
void merge(int[],int,int);



void Mergesort(int a[],int lb,int ub)
{
    
    if(lb==ub)
    {
        return;
    }
    
    int    mid=(lb+ub)/2;
        Mergesort(a, lb, mid);
        Mergesort(a,mid+1, ub);
        merge(a, lb,  ub);
   
     
}

void merge(int a[],int lb, int ub)
{
    int p=lb;
    int mid=(ub+lb)/2;
    int q=mid + 1;
    int k=lb;
    int b[ub+1];
    
    
        while(p<=mid && q<=ub)
        {
            if(a[p]<=a[q])
            {
                b[k]=a[p];
                p++;
                 k++;
            }
            else 
            {
                b[k]=a[q];
                q++;
                 k++;
            }
            
        }

      
    
     while(q<=ub)
        {
            b[k]=a[q];
            q++;
            k++;
        }

      
        while(p<=mid)
        {
            b[k]=a[p];
            p++;
            k++;
        }
        
    
   for(k=lb;k<=ub;k++)
   {
       a[k]=b[k];
   }
   
  
}

int main()
{
    int a[10],i,size;

  cout<<"enter size of array"<<endl;
  cin>>size;
  cout<<"enter elements of array"<<endl;
  for(i=0;i<size;i++)
  {  cin>>a[i];   } 
  for(i=0;i<size;i++)
  { cout<<a[i]; }

  cout<<endl;

  Mergesort(a,0,size-1);

  
  
  for(i=0;i<size;i++)
  {
      cout<<a[i];
  }
  
  return 0;
}  