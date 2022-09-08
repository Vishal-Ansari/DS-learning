#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

void preorder(struct node *root)  // preorder means    ROOT-LEFT-RIGHT
 {
     
     if(root==0)
     return;

     printf("%d ",root->data);
     preorder(root->left);
     preorder(root->right);
}

void inorder(struct node *root)  // inorder means    LEFT-ROOT-RIGHT
 {
     
     if(root==0)
     return;

     inorder(root->left);
     printf("%d ",root->data);
     inorder(root->right);
}

void postorder(struct node *root)  // postorder means    LEFT-RIGHT-ROOT
 {
     
     if(root==0)
     return;

     postorder(root->left);
     postorder(root->right);
     printf("%d ",root->data);
}



struct node *create()
{
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data (-1 for node) : ");
    scanf("%d", &x);
    if (x == -1)
        return 0;
    newnode->data = x;

    printf("enter the left child of %d : ", x);
    newnode->left = create();
    printf("enter the right child of %d : ", x);
    newnode->right = create();

    return newnode;
}

int main()
{
    struct node *root;
    root = 0;
    root = create();

    printf("preorder is:- \n");
    preorder(root);

    printf("inorder is:- \n");
    inorder(root);

    printf("postorder is:- \n");
    postorder(root);
}


