#include <bits/stdc++.h>

using namespace std;

int main(){
    int col_start=0;
    int row_start=0;
    int col_end=2;
    int row_end=3;
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    while (row_start<=row_end && col_start<=col_end){
        for(int i=row_start;i<=row_end;i++){
            cout<<arr[col_start][i]<<" ";
        }
        col_start++;
        for (int i=col_start;i<=col_end;i++){
            cout<<arr[i][row_end]<<" ";
        }
        row_end--;
        for (int i=row_end;i>=row_start;i--){
            cout<<arr[col_end][i]<< " ";
        }
        col_end--;
        for (int i=col_end;i>=col_start;i--){
            cout<<arr[i][row_start]<<" ";
        }
        row_start++;

        
    }
    return 0;
}