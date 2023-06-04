#include<stdio.h>
#include<stdlib.h>

void display(struct node*);

struct node
{
 int data;
 struct node*next;
}*head;


int main()
{

 struct node*newnode,*point;int choice=1;
 //clrscr();
 head=NULL;

 while(choice)
 {
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter elements for nodes\n");
      scanf("%d",&newnode->data);
 	newnode->next=NULL;

    if(head==NULL)
   {
     head=point=newnode;   }

    else
   {
      point->next=newnode;
      point=point->next;   }
      
      printf("enter choice for making node\n");
      scanf("%d",&choice);
 }

 
 display(head);
  return 0;
}


void display(struct node*ptr)
{
 while(ptr!=NULL)
 {
  printf("%d\n",ptr->data);

  ptr=ptr->next;
 }
}

