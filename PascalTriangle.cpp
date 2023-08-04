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

