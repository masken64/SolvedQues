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
