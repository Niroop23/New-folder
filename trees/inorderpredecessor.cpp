#include "node.cpp"


void inorder(tree* root){
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
tree* max(tree* root)
{
    tree*cur=root->left;
    if(cur==NULL){
        return NULL;

    }
    while(cur->right!=NULL){
        cur=cur->right;

    }
    return cur;
}

tree* find(tree* root,int data)
{
    if(root==NULL) return NULL;

    else if(root->data==data) return root;

    else if(root->data<data) return find(root->right,data);

    else return find(root->left,data);
}

tree* predecessor(tree* root, int data) {
  // Find the node with the given data
  tree* current = find(root, data);
  if (current == NULL) {
    return NULL; // Node not found
  }

  // If the node has a left child, the predecessor is the max of the left subtree
  if (current->left != NULL) {
    return max(current->left);
  }

  // Otherwise, we need to find the predecessor in the ancestor chain
  tree* predecessor = NULL;
  tree* ancestor = root;

  while (ancestor != current) 
  {
    if (ancestor->data < current->data) 
    {
      predecessor = ancestor;
      ancestor = ancestor->right;
    } 
    else 
    {
      ancestor = ancestor->left;
    }
  }
  return predecessor;
}


int main(){

    root=insert(root,13);
    root=insert(root,17);
    root=insert(root,1);
    root=insert(root,2);
    root=insert(root,26);
    root=insert(root,3);
    root=insert(root,0);
    root=insert(root,14);

    root=predecessor(root,13);
    
    cout<<root->data;
    
}
