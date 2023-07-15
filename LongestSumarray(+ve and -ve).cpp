#include <bits/stdc++.h>

using namespace std;

int compute(int a[], int n, int k){
    map<int,int> map;
    int maxL=0;
    int sum=0;
    int len =0;
    for(int i =0;i<n;i++){
        sum = sum+a[i];
    
    if(sum==k){
        maxL = max(maxL,i+1);
    }
    
    int rem = sum-k;
     
    if(map.find(rem)!= map.end()){
        len = i-map[rem];
        maxL = max(maxL,len);
    }
    
    if(map.find(sum)== map.end()){
        map[sum]=i;
    }
    
    }
    
    return maxL;
}

int main()
{
    int a[] ={ -1, 1, 1};
    int k =1;
    int n = sizeof(a)/sizeof(a[0]);
    int l = compute(a,n,k);
    cout<<l;
}
