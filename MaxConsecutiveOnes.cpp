//Given a binary array nums, return the maximum number of consecutive 1's in the array.
#include<bits/stdc++.h>
using namespace std; 
void comput(vector<int> a){
    int mi = 0;
    int os =0;
    for(int i =0;i<a.size();i++){
        if(a[i]==1){
            os++;
            mi = max(mi,os);
        }
        else{
            os = 0;
        }
        
    }
    cout<<mi;
    
}
int main(){
    vector<int> a = {1,1,0,0,1,1};
    comput(a);
}
