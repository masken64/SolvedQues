#include<bits/stdc++.h>
using namespace std;
vector<int> compute(vector<vector<int>> a, int n, int m){
    vector<int> ans;
    int top =0, left =0, bottom = n-1, right = m-1;
    while(top<=bottom && left<=right){
        for(int i = left; i<=right;i++){
            ans.push_back(a[top][i]);
        }
        top++;
        for(int i = top ; i<=bottom;i++){
            ans.push_back(a[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i = right; i>=left;i--){
                ans.push_back(a[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i = bottom;i>=top;i--){
                ans.push_back(a[i][left]);
            }
            left++;
        }
    }
    
    return ans;
    
}
int main(){
    vector<vector<int>> a = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = a.size();
    int m = a[0].size();
    vector <int> res = compute(a,n,m);
    for(int i =0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}