#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    set<int>s;
    int q,x,a;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x>>a;
        if(x==1)
        {
            set<int>::iterator it;
            it =s.find(a);
            if(a!=*it)
            {
                s.insert(a);
            }
        }
        else if(x==2)
        {
            set<int>::iterator it;
            it =s.find(a);
            if(a==*it)
            {
                s.erase(a);
            }
        }
        else if(x==3)
        {
            set<int>::iterator it;
            it =s.find(a);
            if(a==*it)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}