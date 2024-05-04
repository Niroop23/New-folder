#include "node.cpp"


tree* min(tree* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}




tree* del(tree*root,int val){
    if(root==NULL) return root;
    
    else if(val<root->data) root->left=del(root->left,val);

    else if(val>root->data) root->right=del(root->right,val);

    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
            
        }
        else if(root->left==NULL){
            tree*temp=root;
            root=root->right;
            delete(temp);
            
        }
        else if(root->right==NULL){
            tree*temp=root;
            root=root->left;
            delete(temp);
            
        }
        else{
            tree*temp=min(root->right);
            root->data=temp->data;
            root->right=del(root->right,temp->data);
        }

    }
    return root;

}

void inorder(tree* root)
{
    if(root==NULL) return;


    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    root=insert(root,12);
    
    root=insert(root,5);
    root=insert(root,15);
    root=insert(root,17);
    root=insert(root,13);
    root=insert(root,3);
    root=insert(root,7);
    root=insert(root,1);
    root=insert(root,9);
    
    cout<<"tree before :\n";
    inorder(root);

    root=del(root,15);
    cout<<"after :\n";
    inorder(root);
 
    return 0;


}
