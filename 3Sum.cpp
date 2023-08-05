//bruteforce 
class Solution {
 public:
  vector<vector<int>> threeSum(vector<int>& a) {
    set<vector<int>> st;
    int n = a.size();
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==0){
                    vector<int> temp = {a[i],a[j],a[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
  }
};


//optimied 
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> compute(vector<int> a, int n){
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    for(int i =0;i<n;i++){
        if(i!=0 && a[i]==a[i-1]) {continue;}
        
        int j=i+1,k=n-1;
        while(j<k){
            int sum = a[i]+a[j]+a[k];
            if(sum>0){ k--;}
            else if(sum<0){ j++;}
            else{
                vector<int> temp = {a[i],a[j],a[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && a[j]==a[j-1]){j++;}
                while(j<k && a[k]==a[k+1]){k--;}
            }
            
        }
    }
    return ans;
}
int main(){
    vector<int> a = { -1, 0, 1, 2, -1, -4};
    int n = a.size();
    vector<vector<int>> ans = compute(a,n);
    for(auto it : ans){
        for(auto el : it){
            cout<<el<<" ";
        }
    }
    
}