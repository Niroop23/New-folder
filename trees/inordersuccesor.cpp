#include "node.cpp"

void inorder(tree* root)
{
    if(root==NULL) return;


    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

tree* search(tree* root,int val){
    if(root=NULL) return NULL;

    else if(root->data==val) return root;

    else if(root->data<val) return search(root->right,val);

    else return search(root->left,val);
}

tree* min(tree* root){
    if(root==NULL) return NULL;

    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

tree* successor(tree*root,int val){
    tree* curr=search(root,val);
    if(curr==NULL) return NULL;

    if(curr->right!=NULL){
        return min(curr->right);//right sub tree
    }
    else{
         //no right  subtree
         tree* next=NULL;
         tree* prev=root;
         while(prev!=curr)
         {
            if(curr->data<prev->data)
            {
                next=prev;
                prev=prev->left;
            }
            else
            {
                prev=prev->right;
            }

        }
        return next;
        }


}