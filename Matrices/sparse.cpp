#include <bits/stdc++.h>

using namespace std;

class element
{   public:
    int i;
    int j;
    int x;


};

class sparse{
    public:
    int m;
    int n;
    int nonzero;
    element *e;
    public:
    sparse(int m,int n,int num ){
        this->m=m;
        this->nonzero=num;
        this->n=n;
        e=new element[nonzero];
    }
    friend istream & operator>>(istream &is,sparse &s);
    friend ostream & operator<<(ostream &os,sparse &s);
    sparse operator+(sparse &s);
    ~sparse(){
        delete [] e;
    }
};

istream & operator>>(istream &is,sparse &s){    
    for (int k=0;k<s.nonzero;k++){
        int r,c,ele;
        cout<<"Enter row column element for tuple "<<k<<" :";
        cin>>r>>c>>ele;
        s.e[k].i=r;
        s.e[k].j=c;
        s.e[k].x=ele;
            
    }
    return is;

}
ostream & operator<<(ostream &os,sparse &s){
    int k=0;
    for (int i=1;i<=s.n;i++){
        for (int j=1;j<=s.m;j++){
            if (i==s.e[k].i && j==s.e[k].j){
                cout<<s.e[k++].x<<" ";
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return os;
}

sparse sparse:: operator+(sparse &s){
    int i=0,j=0,k=0;

    // if (m!=s.m || n!=s.n) return NULL; // return null when datatype needed
    // else{
        sparse *sum=new sparse{m,n,nonzero+s.nonzero};
        while (i<nonzero && j<s.nonzero){
        if (e[i].i<s.e[j].i) sum->e[k++]=e[i++];
        else if (e[i].i>s.e[j].i) sum->e[k++]=s.e[j++];
        else {
            if (e[i].j<s.e[j].j) sum->e[k++]=e[i++];
            else if (e[i].j>s.e[j].j) sum->e[k++]=s.e[j++];
            else {
                sum->e[k]=s.e[j];
                sum->e[k++].x+=s.e[j++].x;
            }
        }

        for(;i<nonzero;i++) sum->e[k++]=e[i];
        for (;j<s.nonzero;j++) sum->e[k++]=s.e[j];
        sum->nonzero=k;
        return (*sum);
        }
    //}
}

int main(){
    sparse m1{5,5,5};
    cin>>m1;
    cout<<m1;
    sparse m2{5,5,6};
    cin>>m2;
    cout<<m2;
    
    sparse add=m1+m2;
    ;
    cout<<add;
    return 0;
}