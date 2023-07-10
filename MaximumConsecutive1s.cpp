//Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.
#include<bits/stdc++.h>
using namespace std;
int compute(vector<int> a,int n){
    int maximum =0;
    int count =0;
    for(int i =0;i<n;i++){
        if(a[i]==1){
            count++;
        }
        else{
            count = 0;
        }
        
        maximum = max(maximum,count);
        
    }
    
    return maximum;
}
int main(){
    vector <int> a = {1,1,1,0,1};
    int n = a.size();
    int ans = compute(a,n);
    cout<<ans;
}
//output - 3
