//bruteforce 

#include<bits/stdc++.h>
using namespace std; 
vector<int> compute(vector<int> a, int n){
    vector<int> ans;
    for(int i =0; i<n;i++){
        if(ans.size()==0 || ans[0]!=a[i]){
            int count =0;
            for(int j =0; j<n ; j++){
                if(a[j]==a[i]){
                    count++;
                }
            }
            
            if(count > floor((n/3))) {
                ans.push_back(a[i]);
            }
            
        }
        
        if(ans.size() ==2) break;
    }
    
    return ans;
}
int main (){
    vector<int> a = {11, 33, 33, 11, 33, 11};
    int n = a.size();
    vector<int> ans = compute(a,n);
    for(auto it : ans){
        cout<<it<<" ";
    }
}

