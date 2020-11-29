#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
};
Node* createnewnode(int data)
{
    Node* stack = new Node();
    stack->data=data;
    stack->next=NULL;
    return (stack);
}

void push(Node** root, int data)
{
    Node* newnode = createnewnode(data);
    newnode->next=*root;
    *root=newnode;
}
int pop(Node** root)
{
    Node* temp= *root;
    *root=(*root)->next;
    int p=temp->data;
    cout<<"item popped";
    free(temp);
    return (p);
}

int main()
{
    Node* root=NULL;
    push(&root,10);
    push(&root,10);
    push(&root,10);
    push(&root,10);
    cout<<pop(&root)<<endl;
    return 0;
    
}
