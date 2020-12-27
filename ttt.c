#include<stdio.h>
#include<stdlib.h>
struct NODE
{
int data;
struct NODE *left;
struct NODE *right;
};
struct NODE * newNODE(int data)
{
struct NODE *NODE=malloc(sizeof(struct NODE));
NODE->data=data;
NODE->left=NULL;
NODE->right=NULL;
return(NODE);
}
int main()
{
struct NODE *root=newNODE(1);
root->left=newNODE(2);
root->right=newNODE(3);
root->left->left=newNODE(4);
getchar();
return 0;
}
