//bruteforce 

#include <bits/stdc++.h>

using namespace std;

void row(vector<vector<int>> &a, int n, int m,int i, int j){
    
    for(int j =0;j<m;j++){
        if(a[i][j]!=0){
            a[i][j]=-1;
        }
    }
}
void col(vector<vector<int>> &a, int n, int m, int i, int j){
    for(int i =0;i<n;i++){
        if(a[i][j]!=0){
            a[i][j]=-1;
        }
    }
}

vector<vector<int>> compute(vector<vector<int>> &a, int n, int m){
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(a[i][j]==0){
                row(a,n,m,i,j);
                col(a,n,m,i,j);
            }
        }
    }
    
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==-1){
                a[i][j]=0;
            }
        }
    }
    return a;
}

int main()
{
    vector<vector<int>> a = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = a.size();
    int m = a[0].size();
vector<vector<int>> sol = compute(a,n,m);
    for(auto it : sol){
        for(auto ele : it){
        cout<<ele<<" ";
    }
        cout<<endl;
    }
}


//optimised 

#include<bits/stdc++.h>
using namespace std;
void compute(vector<vector<int>> &a, int n, int m){
    int col0 = 1;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(a[i][j]==0){
                a[i][0]=0;
                if(j!=0){
                    a[0][j]=0;
                }
                else{
                    col0 = 0;
                }
            }
        }
    }
    
    for(int i =1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]!=0){
                if(a[0][j]==0 || a[i][0]==0){
                    a[i][j]=0;
                }
            }
        }
    }
    if(a[0][0]==0){
        for(int j =0;j<m;j++){
            a[0][j]==0;
        }
    }
    if(col0==0){
        for(int i =0;i<n;i++){
            a[i][0]=0;
        }
    }
    
   
}


int main(){
    vector<vector<int>> a = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = a.size();
    int m = a[0].size();
    compute(a,n,m);
    for(auto it : a){
        for(auto el : it){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}