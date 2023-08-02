//bruteforce 
#include<bits/stdc++.h>
using namespace std;

int compute (vector<int> a, int n, int k){
    int sum;
    int count =0;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int x=i;x<=j;x++){
                sum=sum+a[x];
            }
			
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> a = {3, 1, 2, 4};
    int k=6;
    int n = a.size();
    int ans = compute(a,n,k);
    cout<<ans;
}


//optimised 
#include<bits/stdc++.h>
using namespace std;
int compute(vector<int> a, int n, int k){
    unordered_map<int,int> mpp;
    int presum = 0;
    int count = 0;
    mpp[0]=1;
    for(int i =0;i<n;i++){
        presum = presum + a[i];
        int rem = presum - k;
        count = count + mpp[rem];
        mpp[presum]++;
    }
    
    return count;
}
int main(){
    vector<int> a ={3, 1, 2, 4};
    int n = a.size();
    int k = 6;
    int answer = compute(a,n,k);
    cout<<answer;
}

