#include<queue>

#include "create.h"

void levelorder(tree*root)
{
    if(root==NULL) return;

    queue<tree*>q;
    q.push(root);

    while(!q.empty())
    {
        tree* curr=q.front();
        cout<<curr->data<<" ";
        q.pop();
        if(curr->left!=NULL) q.push(curr->left );
        if(curr->right!=NULL) q.push(curr->right);
        
    }
    
}

int main()
{
    root=insert(root,20);
    root=insert(root,16);
    root=insert(root,25);
    root=insert(root,17);
    root=insert(root,22);
    root=insert(root,26);

    levelorder(root);



} 