#include <iostream>

using namespace std;
void toh(int n,int source,int aux,int destination){
    if (n==1) cout<<"MOVE DISK 1 form "<<source<<" to "<<destination<<endl;
    else{
    toh(n-1,source,destination,aux);
    cout<<"MOVE DISK "<<n<<" from "<<source<<" to "<<destination<<endl;
    toh(n-1,aux,source,destination);
    }
}
int main(){
     toh(3,1,2,3); 
    return 0;

}