//bruteforce 

#include<bits/stdc++.h>
using namespace std; 
vector<int> compute(vector<int> a, int n){
    vector<int> ans;
    for(int i =0; i<n;i++){
        if(ans.size()==0 || ans[0]!=a[i]){
            int count =0;
            for(int j =0; j<n ; j++){
                if(a[j]==a[i]){
                    count++;
                }
            }
            
            if(count > floor((n/3))) {
                ans.push_back(a[i]);
            }
            
        }
        
        if(ans.size() ==2) break;
    }
    
    return ans;
}
int main (){
    vector<int> a = {11, 33, 33, 11, 33, 11};
    int n = a.size();
    vector<int> ans = compute(a,n);
    for(auto it : ans){
        cout<<it<<" ";
    }
}

//optimised 

#include<bits/stdc++.h>
using namespace std; 
vector<int> compute(vector<int> a, int n){
    int cnt1=0;
    int cnt2=0;
    int el1,el2;
    for(int i =0;i<n;i++){
        if(cnt1==0 && el2!=a[i]){
            cnt1=1;
            el1=a[i];
        }
        else if(cnt2==0 && el1!=a[i]){
            cnt2=1;
            el2=a[i];
        }
        else if(a[i]==el1) cnt1++;
        else if(a[i]==el2) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ans;
    cnt1=0,cnt2=0;
    for(int i =0;i<n;i++){
        if(a[i]==el1)cnt1++;
        if(a[i]==el2) cnt2++;
    }
    
    if(cnt1>=floor((n/3))) ans.push_back(el1);
    if(cnt2>=floor((n/3))) ans.push_back(el2);
    
    
    return ans;
}
int main (){
    vector<int> a = {11, 33, 33, 11, 33, 11};
    int n = a.size();
    vector<int> ans = compute(a,n);
    for(auto it : ans){
        cout<<it<<" ";
    }
}