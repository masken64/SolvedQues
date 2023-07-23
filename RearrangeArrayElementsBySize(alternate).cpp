//bruteforce 
#include <bits/stdc++.h>

using namespace std;

void compute(int a[], int  n){
    vector<int> p;
    vector<int> ne;
    for(int i =0;i<n;i++){
        if(a[i]>0){
            p.push_back(a[i]);
        }
        else {
            ne.push_back(a[i]);
        }
    }
    
    for(int i =0;i<n/2;i++){
        a[2*i]=p[i];
        a[2*i+1]=ne[i];
    }
    
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
         
    }
}

int main()
{
int a[] = {1,2,-4,-5};
int n = sizeof(a)/sizeof(a[0]);
compute(a,n);
}

//optimised 

#include <bits/stdc++.h>

using namespace std;

void compute(int a[], int  n){
    int pi =0;
    int ni = 1;
    vector<int> ans(n,0);
    for(int i =0;i<n;i++){
        if(a[i]<0){
            ans[ni]=a[i];
            ni=ni+2;
        }
        else{
            ans[pi]=a[i];
            pi=pi+2;
        }
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
}

int main()
{
int a[] = {1,2,-4,-5};
int n = sizeof(a)/sizeof(a[0]);
compute(a,n);
}