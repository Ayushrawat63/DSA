#include<iostream>
#include<queue>

using namespace std;

class Node{
   public:
   int data;
   Node* left;
   Node* right;

   Node(int val)
   {
    this->data=val;
    this->right=NULL;
    this->left=NULL;
   }
};

Node* BuildBST(Node* root)
{
     cout<<"Enter the value ";
     int d;
     cin>>d;
     root=new Node(d);

     if(d==-1)
       return NULL;
    
    if(d < root->data)
    { 
        cout<<"Enter the left side data "<<endl;
        root->left=BuildBST(root->left);
    }
    else
    {
        cout<<"Enter the right side data "<<endl;
      root->right=BuildBST(root->right);

    }
}

int main()
{
    Node* Root=NULL;
    Root=BuildBST(Root);
    return 0;
}