#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node*right;
    struct node*left;

};

int traverse(struct node*root)
{
    if(root!=NULL)
    {
        cout<<root->data<<endl;
        traverse(root->left);
        traverse(root->right);
        return 0;
    }
}

int main()
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=4;
    root->right=NULL;
    root->left=NULL;

struct node*node1;
    node1=(struct node*)malloc(sizeof(struct node));
    node1->data=9;
    node1->right=NULL;
    node1->left=NULL;


struct node*node2;
    node2=(struct node*)malloc(sizeof(struct node));
    node2->data=8;
    node2->right=NULL;
    node2->left=NULL;

    root->left=node1;
    root->right=node2;

    traverse(root);



    return 0;


    

}