#include<iostream>
#include "node.cpp"
using namespace std;

// height of a node is the noof edges in longest path from thr node to a leaf node.
//height of tree=height of root node;
// DEPTH OF A NODE IS THE NOOF EDGES IN PATH FROM ROOT TO THAT NODE.
 
int height_bst(tree* root)
{
    if(root==NULL) return -1;

    int leftheight=height_bst(root->left);
    int rightheight=height_bst(root->right);


    return max(leftheight,rightheight)+1;
}



int main()
{
    root=NULL;
    root=insert(root,20);
    root=insert(root,18);
    root=insert(root,25);
    root=insert(root,99);
    root=insert(root,14);
    int a=height_bst(root);
    cout<<"height of binary tree :"<<a<<endl;

    return 0;
}