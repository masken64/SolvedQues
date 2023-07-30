//bruteforce 

#include <bits/stdc++.h>

using namespace std;

vector<int> compute(vector<int> a, int n){
    vector<int> ans;
    for(int i =0;i<n;i++){
        int c=1;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                c=0;
                break;
            }
        }
        if(c==1){
            ans.push_back(a[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> a = { 10, 22, 12, 3, 0, 6 };
    int n = a.size();
    vector<int> sol = compute(a,n);
    for(auto it : sol){
        cout<<it<<" ";
    }
}

//optimised 

#include <bits/stdc++.h>

using namespace std;

vector<int> compute(vector<int> a, int n){
    vector<int> ans;
    int max = a[n-1];
    ans.push_back(a[n-1]);
    for(int i =n-2;i>=0;i--){
        if(a[i]>max){
            ans.push_back(a[i]);
            max = a[i];
        }
    }

    return ans;
}

int main()
{
    vector<int> a = { 10, 22, 12, 3, 0, 6 };
    int n = a.size();
    vector<int> sol = compute(a,n);
    for(auto it : sol){
        cout<<it<<" ";
    }
}
