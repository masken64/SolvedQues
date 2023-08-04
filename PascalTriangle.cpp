//variation 1 , given row and col
#include<bits/stdc++.h>
using namespace std;
int ncr(int n, int r){
    long long res = 1;
    for(int i =0;i<r;i++){
        res = res * (n-i);
        res = res/(i+1);
    }
    return res;
}
int compute(int r, int c){
    int ans = ncr(r-1,c-1);
    return ans;
}
int main(){
    int r = 5, c = 3;
    int ans = compute(r,c);
    cout<<ans;
}

//variation 2, give row number n, print that row

#include<bits/stdc++.h>
using namespace std;

void compute(int n){
    
    long long ans = 1;
    cout<<ans<<" ";
    for(int i =1;i<n;i++){
        
        ans = ans * (n-i);
        ans = ans/i;
        cout<<ans<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 5;
    compute(n);
}

//variation 3, given row n, print pascal triangle upto nth rows

#include<bits/stdc++.h>
using namespace std;

vector<int> genR(int row){
    int ans = 1;
    vector<int> ansR;
    ansR.push_back(1);
    for(int col = 1; col<row;col++){
        ans = ans*(row-col);
        ans = ans/col;
        ansR.push_back(ans);
    }
    return ansR;
}

vector<vector<int>> compute(int n ){
    vector<vector<int>> ans;
    for(int row = 1; row<= n; row++){
        ans.push_back(genR(row));
    }
    return ans;
}
int main(){
    int n = 5;
    vector<vector<int>> ans = compute(n);
    for(auto it : ans){
        for(auto el : it){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}