//brute force 
#include<bits/stdc++.h>
using namespace std;
int compute(vector<int> a, int n, int k){
    int length = 0;
    for(int i =0;i<n;i++){
        for(int j =i;j<n;j++){
            int sum = 0;
            for(int x = i;x<=j;x++){
                sum = sum + a[x];
            }
            if(sum == k){
                length = max(length,j-i+1);
            }
        }
    }
    return length;
}
int main(){
    vector<int> a = {2,3,5,1,9};
    int k = 10;
    int n = a.size();
    int maxSubarray = compute(a,n,k);
    cout<<maxSubarray;
    }

//optimised 
#include<bits/stdc++.h>
using namespace std;
int compute(vector<int> a, int k, int n){
    int l=0;
    int r =0;
    int sum=a[0];
    int len=0;
    while(r<n){
        while(l<r && sum>k){
            sum = sum - a[l];
            l++;
        }
        if(sum==k){
            len = max(len,r-l+1);
        }
        r++;
        if(r<n){
            sum = sum + a[r];
    }
    }
    return len;
}
int main(){
    vector <int> a = {2,3,5,1,9};
    int k = 10;
    int n = a.size();
    int ans = compute(a,k,n);
    cout<<ans;
}



//optimised 
