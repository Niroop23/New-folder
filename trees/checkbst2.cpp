#include "node.cpp"

bool issubtree_less(tree*root,int val)
{
    if(root==NULL) return true;
    if(root->data<=val && issubtree_less(root->left,val) && issubtree_less(root->right,val)) return 1;
    else{
        return false;
    }
}

bool issubtree_big(tree*root,int val){
    if(root==NULL) return true;
    if(root->data>val && issubtree_big(root->left,val) && issubtree_big(root->right,val))  return true;

    else{
        return false;
    }
}


bool isbstuti(tree *root,int minval, int maxval){
    if(root==NULL)  return true;

    if(root->data<minval && root->data > maxval && isbstuti(root->left,minval,root->data) && isbstuti(root->right,root->data,maxval)){
        return true;
    }

    else{
        return false;
    }
}