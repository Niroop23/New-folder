#pragma once

#include<iostream>

using namespace std;

struct tree{
    int data;
    tree* left;
    tree*right;
};
tree*root=NULL;



tree * getnewnode(int data)
{
    tree* newnode=new tree();
    newnode->data=data;
    newnode->left=newnode->right=NULL;

    return newnode;
}

tree* insert(tree* root,int x)
{
    if(root==NULL)
    {
        root=getnewnode(x);
        return root;
    }
    else if(x<=root->data)
    {
        root->left=insert(root->left,x);

    }
    else 
    {
        root->right=insert(root->right,x);
    }
    return root;

}