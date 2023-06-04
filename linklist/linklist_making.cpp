#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node*next;
};

int traversal(struct node*newnode)
{
    while(newnode!=NULL)
    {
        cout<<newnode->data<<endl;
        newnode=newnode->next;
    }
        return 0;
}
int main()
{
    struct node *node1, *node2, *node3;
    node1=(struct node*)malloc(sizeof(struct node));
    node2=(struct node*)malloc(sizeof(struct node));
    node3=(struct node*)malloc(sizeof(struct node));

    node1->data=3;
    node1->next=node2;

    node2->data=4;
    node2->next=node3;

    node3->data=9;
    node3->next=NULL;


    //insertion from last

   /* struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=10;
    newnode->next=NULL;
    node3->next=newnode;*/


    //insertion from start

   /* struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=100;
    newnode->next=node1;*/

    //insertion from po

    traversal(newnode);  // it will change to head1 if we want to insert from start

    return 0;

}
