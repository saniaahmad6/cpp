#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
struct ARRAY{
    int ptr[20];//take array not ptr
    int size;
    int length;
};
void display(ARRAY object){
    for (int i=0;i<(object.length);i++){
        cout<<object.ptr[i]<<" ";
    }
    cout<<endl;
}
void append(ARRAY *arr,int x){
    if ((*arr).length<(*arr).size){
        (*arr).ptr[arr->length++]=x;//postincrement
    }
}
void insert(ARRAY *arr,int index,int x){
    if (index>=0 && index<=(*arr).length){
        for (int i=arr->length;i>index;i--){
            arr->ptr[i]=arr->ptr[i-1];
        }
        arr->ptr[index]=x;
        arr->length++;
    }
}


int del(ARRAY *arr,int index){
    int x=-1;
    if (index>=0 && index <arr->length){
        x=arr->ptr[index];
        for (int i=index;i<(arr->length)-1;i++){
            arr->ptr[i]=arr->ptr[i+1];
        }
        (*arr).length--;
    }
    return x;
}


int bin_search(ARRAY *arr,int x){//sorted list must
    int l=0,h=(arr->length)-1,mid;
    cout<<h<<endl;
    while (l<=h){
        mid=(l+h)/2;
        if (x==(arr->ptr[mid])) return mid;
        else if (x<(arr->ptr[mid])) h=mid-1;
        else l=mid+1;
    }
    return -1;
}
int rec_bin_search(ARRAY *arr,int x,int l,int h){//sorted list must
    if (l>h) return -1;
    int mid=(l+h)/2;
    if (x==(arr->ptr[mid])) return mid;
    else if (x<(arr->ptr[mid])) rec_bin_search(arr,x,l,mid-1);
    else rec_bin_search(arr,x,mid+1,h);
    
   
}
int linear_search(ARRAY *arr,int x){
    for (int i=0;i<arr->length;i++){
        if(x==arr->ptr[i]){
            swap(arr->ptr[i],arr->ptr[i-1]);//must take & but still works fine
            return i;
        }
    }
    return -1;
}
int get(ARRAY *arr,int index){
    if (index>=0 && index<arr->length){
        return arr->ptr[index];
    }
}

void set(ARRAY *arr,int index, int x){
    if (index>=0 && index<arr->length){
        arr->ptr[index]=x;
    }
}
int max(ARRAY *arr){
    int max=arr->ptr[0];
    for (int i=1;i<arr->length;i++){
        if (arr->ptr[i]>max) max=arr->ptr[i];
    }
    return max;
}
int min(ARRAY *arr){
    int min=arr->ptr[0];
    for (int i=1;i<arr->length;i++){
        if (arr->ptr[i]<min) min=arr->ptr[i];
    }
    return min;
}
int sum(ARRAY *arr){
    int sum=0;
    for (int i=0;i<arr->length;i++){
        sum+=arr->ptr[i];
    }
    return sum;
}
double avg(ARRAY *arr){
    return static_cast<double>(sum(arr))/arr->length;
}

int main(){
    // int a[]={1,2,3,4,5};
    ARRAY obj;
    int n;
    cout<<"Enter no of entries:";
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>obj.ptr[i];
    }
    obj.length=n;
    // display(obj);
    // append(&obj,10);
    // display(obj);
    // insert(&obj,2,4);
    // display(obj);
    // del(&obj,3);
    // display(obj);
    // cout<<linear_search(&obj,85)<<endl;
    // display(obj);
    
    // cout<<bin_search(&obj,2)<<endl;
    display(obj);
    // cout<<rec_bin_search(&obj,2,0,obj.length);
   cout<<get(&obj,3);
   set(&obj,3,100);
    display(obj);
    cout<<max(&obj)<<endl;
    cout<<min(&obj)<<endl;
    cout<<avg(&obj)<<endl;
    return 0;
}