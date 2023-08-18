//bruteforce 
#include<bits/stdc++.h>
using namespace std;
int compute(vector<int> a, int n, int k){
    int cnt =0;
    for(int i =0;i<n;i++){
        for(int j =i;j<n;j++){
            int x = 0;
            for(int k =i;k<=j;k++){
                x = x^k;
            }
            if(x==k){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    vector<int> a = { 4,3,2,1,5,6};
    int n = a.size();
    int k = 3;
    int ans = compute(a,n,k);
    cout<<ans;
}