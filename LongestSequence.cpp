//bruteforce 
#include <bits/stdc++.h>

using namespace std;
bool linearSearch(vector<int> a, int x){
    int n = a.size();
    for(int i =0;i<n;i++){
        if(a[i]==x){
            return true;
            break;
        }
    }
    return false;
}

int compute(vector<int> a, int n){
    int maxi=1;
    for(int i =0;i<n;i++){
        int x = a[i];
        int cn = 1;
        while (linearSearch(a,x+1)==true){
            x++;
            cn++;
        }
        
        maxi = max(maxi,cn);
    }
    return maxi;
    
}

int main()
{
    vector<int> a = {0,3,7,2,5,8,4,6,0,1};
    int n = a.size();
    int sol = compute(a,n);
    cout<<sol;
}
