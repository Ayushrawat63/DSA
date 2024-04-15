#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int d)
  {
    data=d;
    left=NULL;
    right=NULL;
  }
};

Node* build(Node* root)
{
    cout<<endl;
    cout<<"Enter the data ";
    int d;
    cin>>d;
    root=new Node(d);
 
    if(d==-1)
      return NULL;
    

    cout<<endl;
    cout<<"Enter the left side: "<<root->data<<" ";
    root->left=build(root->left);
    
    cout<<endl;
    cout<<"Enter the right side: "<<root->data<<" ";
    root->right=build(root->right);
   
}

int heightBTcnt(Node* root,int cnt)
{
    if(root==NULL)
      return 0;
    
    return 1 + max(heightBTcnt(root->left ,cnt+1) , heightBTcnt(root->right,cnt+1));
}

int heightBT(Node* root)
{
    if(root==NULL)
      return 0;
    
    return 1 + max(heightBT(root->left) , heightBT(root->right));
}
int main()
{
    Node* Root=NULL;
    Root= build(Root);

    cout<<"heigth of tree: "<<heightBT(Root)<<endl;
    cout<<"heigth of tree: "<<heightBTcnt(Root,0);

}