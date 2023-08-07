//bruteforce 
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> compute(vector<int> a, int n, int target){
    set<vector<int>> st;
    for(int i =0;i<n;i++){
        for(int j = i+1; j<n;j++){
            for(int k = j+1;k<n;k++){
                for(int l = k+1; l<n;l++){
                    long long sum = a[i]+a[j]+a[k]+a[l];
                    if(sum==target){
                        vector<int> temp = {a[i],a[j],a[k],a[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
int main(){
    vector<int> a = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int n = a.size();
    int target = 9;
    vector<vector<int>> ans = compute(a,n,target);
    for(auto it : ans){
        for(auto el : it){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}