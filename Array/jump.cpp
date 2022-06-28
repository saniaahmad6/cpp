#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    vector <int> v ;//vector of 0s and 1s
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x%2);
    }
    vector <int> ones(n+1,0);
    vector <int> zeros(n+1,0);
    for (int i=0;i<n;i++){
       ones[i+1]=ones[i]+v[i];//odd
       zeros[i+1]=i+1-ones[i+1];//even
    }
    
   
    
    if (v[0]==v[n-1]){
        if (v[0]==0){
            cout<<zeros[n]-1<<endl;
        }
        else{
            cout<<ones[n]-1<<endl;
        }
    }
    
    else{
        int ans=INT_MAX;
        for (int i=0;i<n;i++){
            if (v[0]==v[i]){
                if (v[0]==0){
                    ans=min(ans,zeros[i]+ones[n]-ones[i+1]);
                }
                else{
                    ans=min(ans,ones[i]+zeros[n]-zeros[i+1]);
                }
            }
            
        
        }
        cout<<ans<<endl;
        
    }
}


int main() {
	int t;
	cin>>t;
	while (t--) solution();
	return 0;
}
