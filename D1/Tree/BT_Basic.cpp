#include <iostream>
#include <queue>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildTree(Node *root)
{
    cout << endl;
    cout << "Enter the data ";
    int d;
    cin >> d;
    root = new Node(d);

    if (d == -1)
        return NULL;

    cout << endl;
    cout << "Enter the left side of  " << root->data << " ";
    root->left = buildTree(root->left);

    cout << endl;
    cout << "Enter the right side  " << root->data << " ";
    root->right = buildTree(root->right);
}
void levelOrderTransversal(Node *root)
{  
    vector<vector<int>>v;
    queue<Node *> res;
    res.push(root);
    res.push(NULL);
    int c=0;

    while (!res.empty())
    {
        Node *temp = res.front();
        res.pop();
        

        if (temp == NULL)
        {
            // cout << endl;
            c++;
            if(!res.empty())
              res.push(NULL);
        }
        else
        {
        // cout << temp->data << " ";
           v[c].push_back(temp->data);

            if (temp->left != NULL)
            {
                res.push(temp->left);
            }

            if (temp->right != NULL)
            {
                res.push(temp->right);
            }
        }
    }
    cout<<v.size();
    // for(int i=0;i<v.size();i++)
    // {
    //     for(int j=0;j<v[i].size();j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
int main()
{
    Node *Root = NULL; // Node* pointer jo  NULL ko point kar rha  hai.
    Root = buildTree(Root);

    levelOrderTransversal(Root);

    return 0;
}