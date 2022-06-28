#include "tree.h"
#include <iostream>

using namespace std;


class Tree{
public:
    Node * root;
    Tree(){root=nullptr;}
    Node * treecreate();
    void preorder(Node *root);
    void inorder(Node *root);
    void postorder(Node *root);
};

Node * Tree::treecreate(){
    Node * p, * t;
    Queue q1(10);
    int x;
    cout<<"Enter root";
    cin>>x;
    root=new Node;
    root->data=x;
    root->lchild=root->rchild=nullptr;
    q1.enqueue(root);
    while (!q1.isempty()){
        p=q1.dequeue();
        cout<<"Enter lchild of "<<p->data<<" : ";
        cin>>x;
        if (x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=nullptr;
            p->lchild=t;
            q1.enqueue(t);
        }
        cout<<"Enter rchild "<<p->data<<" : ";
        cin>>x;
        if (x!=-1){

            t=new Node;
            t->data=x;
            t->lchild=t->rchild=nullptr;
            p->rchild=t;
            q1.enqueue(t);
        }
    }
    return root;
}

void Tree::preorder(Node * root){
    if (root){
        
        cout<<root->data << " ";
        preorder(root->lchild);
        preorder(root->rchild);
    }
}
int main(){
    Tree tree;
    Node * rootans=tree.treecreate();
    tree.preorder(rootans);
    return 0;
}