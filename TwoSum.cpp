//bruteforce 

#include <bits/stdc++.h>

using namespace std;
string compute(vector<int> a , int n, int k){
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k) return "Yes";
        }
    }
    return "No";
}

int main()
{
    vector<int> a = {2,6,5,8,11};
    int n = a.size();
    int k = 14;
    string s = compute(a,n,k);
    cout<<s;
}



//v2

#include <bits/stdc++.h>

using namespace std;
vector<int> compute(vector<int> a , int n, int k){
    vector<int> ans;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1,-1};
}

int main()
{
    vector<int> a = {2,6,5,8,11};
    int n = a.size();
    int k = 14;
    vector<int> s = compute(a,n,k);
    for(auto it : s){
        cout<<it<<" ";
    }
}

//optimised 

#include <bits/stdc++.h>

using namespace std;
string compute(vector<int> a , int n, int k){
    vector<int> ans;
    int l = 0;
    int r = n-1;
    while(l<r){
        int sum = a[l]+a[r];
        if(sum == k) return "Yes";
        else if(sum<k) l++;
        else r--;
    }
    
    return "No";
}

int main()
{
    vector<int> a = {2,6,5,8,11};
    int n = a.size();
    int k = 14;
    string s = compute(a,n,k);
    cout<<s;
}





