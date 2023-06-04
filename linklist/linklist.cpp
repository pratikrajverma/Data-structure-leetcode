#include <iostream>
#include <stdlib.h>
void traverse(struct node *);
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *head1, *head2;
    head = (struct node *)malloc(sizeof(struct node));
    head1 = (struct node *)malloc(sizeof(struct node));
    head2 = (struct node *)malloc(sizeof(struct node));

    cout << "elements of linklists is " << endl;

    head->data = 5;
    head->next = head1;
    head1->data = 6;
    head1->next = head2;
    head2->data = 9;
    head2->next = NULL;

    traverse(head);
    return 0;
}
void traverse(struct node *newnode)
{
    while (newnode != NULL)
    {
        cout << newnode->data << endl;
        newnode = newnode->next;
    }
}