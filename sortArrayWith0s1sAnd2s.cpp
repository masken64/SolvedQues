//bruteforce 

#include <bits/stdc++.h>

using namespace std;
void compute(vector<int> &a , int n){
    int c0=0,c1=0,c2=0;
    for(int i =0;i<n;i++){
        if(a[i]==0) {c0++;}
        else if(a[i]==1) {c1++;}
        else {c2++;}
    }
    
    for(int i =0; i<c0;i++) {a[i]=0;}
    for(int i=c0;i<c0+c1;i++){ a[i]=1;}
    for(int i=c0+c1;i<n;i++) {a[i] =2;}
    
    
}

int main()
{
    vector<int> a = {2,2,0,0,1,2};
    int n = a.size();
    compute(a,n);
    for(auto it: a){
        cout<<it<<" ";
    }
}


