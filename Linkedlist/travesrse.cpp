#include <iostream>

using namespace std;
struct node{
    int data;
    struct node *next;
}*first=nullptr;

void create(int *A, int n){
    int i;
    node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=nullptr;
    last=first;
    for (i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}

void display(node *p){
    while (p!=nullptr){
        cout<<(p->data)<<" ";
        
        p=p->next;
    }
    cout<<endl;
}
void rdisplay(node * p){
    if (p==nullptr) return;
    //ascending
    rdisplay(p->next);
    //descending
    cout<<p->data<<" ";
}

int count(node *p){
    int c=0;
    while (p){
        c++;
        p=p->next;
    }
    return c;
}

int rcount(node * p){
    if (p==nullptr) return 0;
    //ascending
    return rcount(p->next) +1;
    //descending
    
}
int sum(node *p){
    int c=0;
    while (p){
        c+=p->data;
        p=p->next;
    }
    return c;
}

int rsum(node * p){
    if (p==nullptr) return 0;
    //ascending
    return rsum(p->next) +p->data;
    //descending
    
}
int max1(node *p){
    int max2=p->data;
    while (p){
        max2=max(max2,p->data);
        p=p->next;
    }
    return max2;
}
int rmax(node * p){
    if (p==nullptr) return INT_MIN;
    //ascending
    return max(p->data,rmax(p->next));
    //descending
    
}

node * osearch(node * p,int key){
    
    node *q=nullptr;
    while (p){
        if (p->data==key){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        else{
            q=p;
            p=p->next;
        }
    }
    return nullptr;
}
node * lsearch(node * p,int key){

    while (p){
        if (p->data==key){
            return p;
        }
        
            p=p->next;
        
    }
    return nullptr;
}
node * rsearch(node * p,int key){
    if (p==nullptr) return nullptr;
    //ascending
    if (p->data==key) return p; 
    else return rsearch(p->next,key);
    //descending
    
}

void insert(node * p,int pos,int val){
    node *t=nullptr;
    if (!(pos <0 || pos>count(p)) ){
        t=new node;
        t->data=val;
        if (pos==0){
            t->next=first;
            first=t;
        }
        else if (p>0){
            for (int i=0;i<pos-1;i++){
                p=p->next;
            }
            t->next=p->next;
            p->next=t;
        }
    }
}
int main(){
    int A[]={3,5,7,8,8};
    create(A,5);
    display(first);
    // cout<<"len: " <<rcount(first)<<endl;
    // cout<<"sum: "<<rsum(first)<<endl;
    // cout<<"max: "<<max1(first)<<endl;
    // cout<<"max: "<<rmax(first)<<endl;
    // node *ans=(osearch(first,7));

    // if (ans)
    // cout<<"found: "<<ans->data<<endl;
    // display(first);

    insert(first,3,100);
    display(first);

    return 0;
}