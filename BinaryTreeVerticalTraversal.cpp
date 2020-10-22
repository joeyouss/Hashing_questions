//need to debug it
#include<bits/stdc++.h>
using namespace std;
//structure for binary tree
struct Node
{
    int data;
    Node* left;
    Node* right;
};
struct Node* createNode(int key) //the key is passed
{
    struct Node* n = new Node;
    n->data=key; //inserted the key
    n->left=NULL;
    n->right=NULL;
    return n;
}
void giveVerticalOrder(Node* root, int horizontalDistance, map<int,vector<int>> &m)
{
    if(root==NULL)
        return;
    
    m[horizontalDistance].push_back(root->data);
    giveVerticalOrder(root->left,horizontalDistance-1,m);
    giveVerticalOrder(root->right,horizontalDistance+1,m);
    
}
void verticalordertree(Node* root)
{
    map<int,vector<int>> m;
    int horizontalDistance=0;
    giveVerticalOrder(root,horizontalDistance, m);
    
    map<int,vector<int>> :: iterator i;
    for(i=m.begin();i!=m.end();i++)
    {
        for(int j;j<i->second.size();++j)
        {
            cout<<i->second[j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
   Node* root= createNode(1);
   root->left= createNode(2);
   root->right= createNode(3);
   root->left->left= createNode(4);
   root->left->right= createNode(5);
   root->right->left= createNode(6);
   root->right->right= createNode(7);
   root->right->left->right= createNode(8);
   root->right->right->right= createNode(9);
   verticalordertree(root);
   return 0;
   
}
