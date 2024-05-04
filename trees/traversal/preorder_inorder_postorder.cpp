#include <iostream>
#include "create.h"


using namespace std;


void preorder(tree* root)
{
    if(root==NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(tree* root)
{
    if(root==NULL) return;


    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(tree* root)
{

    if(root==NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}


int main()
{
    root=insert(root,13);
    root=insert(root,17);
    root=insert(root,1);
    root=insert(root,2);
    root=insert(root,26);
    root=insert(root,3);

    cout<<"preorder :";
    preorder(root);
    cout<<"\n";


    cout<<"inorder : ";
    inorder(root);
    cout<<"\n";


    cout<<"postorder : ";
    postorder(root);
    cout<<"\n";

    return 0;
}