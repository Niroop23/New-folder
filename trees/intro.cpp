#include<iostream>
#include "node.cpp"
using namespace std;



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
    

}

bool search(tree* root,int data)
{
    if(root==NULL) return false;

    else if(data==root->data) return true;


    else if(data<=root->data)
    {
        search(root->left,data);
        
    }

    else if(data>root->data)
    {
        search(root->right,data);
    }

    else{
        return false;
    }

    
}

int min_bst(tree*root)
{
    tree*curr=root;
    if(curr==NULL) return 0;

    while(curr->left!=NULL){
        curr=curr->left;
    }
    return curr->data;

}

int min_recur(tree* root)
{
    if(root==NULL){
        cout<<"tree is empty";
        return -1;
    }
    
    else if(root->left==NULL){
        return root->data;
    }
    return min_recur(root->left);
}
int max_bst(tree*root)
{
    tree*curr=root;
    if(curr==NULL){
        return 0;
    }
    while(curr->right!=NULL)
    {
        curr=curr->right;
    }
    return curr->data;

}



int main()
{
    
    root=insert(root,15);
    root=insert(root,-60);
    root=insert(root,20);
    root=insert(root,25);
    
    root=insert(root,99);
    root=insert(root,12);


    int a=min_recur(root);
    cout<<a<<endl;

    cout<<"max element in the bst is : ";
    int b=max_bst(root);
    cout<<b<<endl;
   /* int ch;
    cout<<"enter ele to search : ";
    cin>>ch;
    if(search(root,ch)) cout<<"found the element \n";

    else cout<<"element is not found \n";*/
    


    return 0;
}