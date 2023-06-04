#include<iostream>
using namespace std;
void queue(int);
void display();

    int queue[10];
    int rear=-1;
    int front=-1;

void queue(int a)
{
    
   
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=a;
    }
    else
    {
        rear++;
        queue[rear]=a;
    }
}

void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        cout<<queue[i];
    }
}

int main()
{
    queue(4);
    queue(3);
    display();
    return 0;
}