#include <iostream>
#include <string>
using namespace std;
int main(){
    string text;
    cout<<"Enter string for pattern: ";
    getline(cin,text);
    for (int i{1};i<=text.length();i++){
        size_t k{text.length()-i};//use size_t
        for (int space{};space<k;space++){
            cout<<" ";
        }
        for (int j{1};j<=i;j++){
            cout<<text.at(j-1);
        }
        for (int j{};j<i-1;j++){
            cout<<text.at(text.length()-2-j);
        }
        cout<<endl;
    }
    return 0;
}
//Which C++ loop(s) did you use and why?

////How did you handle displaying the leading spaces in each row of the pyramid?

//Now that you completed the assignment, how might approach the problem differently if you had to solve it again?