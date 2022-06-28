#include <iostream>

using namespace std;


class rectangle{
    private:
    int l;
    int b;
    public:
        //class name for constructor same as constructor name
        rectangle(int len,int bred)
        : l{len},b{bred}
        { 
        }

        rectangle()
        : rectangle{1,1}{

        }
        void init(int len,int bred)
        {  l=len;b=bred;
        }
        int area(){  
            return (l*b);
        }
        void change_len(int new_len){
            l=new_len;
        }

};
int main(){
    rectangle l;
    cout<<l.area()<<endl;
    l.init(5,3);
    cout<<l.area()<<endl;
    l.change_len(50);
    cout<<l.area()<<endl;
    return 0;
}