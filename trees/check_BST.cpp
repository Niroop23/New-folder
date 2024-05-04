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
bool is_bst(tree* root)
{
    
    if(root==NULL) return true;

    if(issubtree_less(root->left,root->data) && issubtree_big(root->right,root->data) && is_bst(root->left) && is_bst(root->right)){
        return true;
    }

    else{
        return false;
    }

    
    
    
}