#include<iostream>
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
int main()
{
    Node* Root=NULL;
    Root= build(Root);

}