#ifndef _TREE_H_
#define _TREE_H_
#include <iostream>
class Node{
public:
    int data;
    Node *lchild;
    Node *rchild;
};

class Queue{
    int front=0;
    int rear=0;
    int size;
    Node **q;
    public:
    Queue(int size){
        this->size=size;
        q=new Node *[size];
    }
    void enqueue(Node* x);
    Node * dequeue();
    
    bool isempty(){return rear==front;}
    
};

void Queue::enqueue(Node* x){
    if ((rear+1)%size==front){
        std::cout<<"Queue is full";
    }
    else{
        rear=(rear+1)%size;
        q[rear]=x;
    }
}

Node * Queue::dequeue(){
    if (rear==front){
        std::cout<<"Queue is Empty";
        return nullptr;
    }
    else{
        front=(front+1)%size;
        return q[front];
        
    }
}







#endif
