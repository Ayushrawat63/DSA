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

int height(Node* root)
{
  if(root==NULL)
    return 0;
  
  return 1 + max(height(root->left),height(root->right));
}

int DiameterBt(Node* root)
{
  if(root==NULL)
    return 0;
   
   int op1=DiameterBt(root->left);
   int op2=DiameterBt(root->right);
   int op3=height(root->left)+height(root->right)+1;

   return max(op3,max(op1,op2));

}
int main()
{
    Node* Root=NULL;
    Root= build(Root);

    cout<<"diameter of BT is: "<<DiameterBt(Root);

}