#include <iostream>
#include <vector>
using namespace std;
//pass by reference
int menu(vector <int> &list);
void print(const vector <int> &list);
void add(vector <int> &list,int num);
double mean(const vector <int> &list);
double max(const vector <int> &list);
double min(const vector <int> &list);

int main(){
    vector <int> list;
    int x=1;
    while (x){
        x=menu(list);//call from fucntion
    }
    return 0;
}
int menu(vector <int> &list){
    cout<<("\nMENU\n 1. print numbers")<<endl;
    cout<<("2. add number to list")<<endl;
    cout<<("3. display mean of numbers")<<endl;
    cout<<("4. display max of numbers")<<endl;
    cout<<("5. display min of numbers")<<endl;
    cout<<"Enter choice: ";
    int c,element;
    double val;
    cin>>c;
    switch (c){
        case 1:
            print(list);
            break;
        case 2:
            cout<<"Enter element to be added: ";
            cin>>element;
            add(list,element);
            break;
        case 3:
            val=mean(list);
            cout<<val<<" is the mean"<<endl;
            break;
        case 4:
            val=max(list);
            cout<<val<<" is the max"<<endl;
            break;
        case 5:
            val=min(list);
            cout<<val<<" is the min"<<endl;
            break;
        default:
            cout<<"wrong input\n";

    }
    cout<<"enter 0 to stop: ";
    int ans;
    cin>>ans;
    return ans;
}
void print(const vector <int> &list){
    if (list.size()==0){
        cout<<"EMPTY LIST"<<endl;
    }
    else {
        cout<<"[ ";
        for (auto i: list){
            cout<<i<<" ";
        }
        cout<<" ] "<<endl;
    }

}
void add(vector <int> &list,int num){
    list.push_back(num);
}
double mean(const vector <int> &list){
    if (list.size()==0){
        cout<<"EMPTY LIST"<<endl;
        return 0;
    }
    double sum{0};
    for (auto i: list){
        sum+=i;
    }
    return (sum/list.size());
}
double max(const vector <int> &list){
    if (list.size()==0){
        cout<<"EMPTY LIST"<<endl;
        return 0;
    }
    double max{INT_MIN};
    for (auto i: list){
        if (i>max) max=i;
    }
    return max;
}
double min(const vector <int> &list){
    if (list.size()==0){
        cout<<"EMPTY LIST"<<endl;
        return 0;
    }
    double min{INT_MAX};
    for (auto i: list){
        if (i<min) min=i;
    }
    return min;
}