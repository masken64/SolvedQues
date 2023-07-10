/*Find the missing number in an array
Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), 
that is not present in the given array.*/

//Bruteforce 
#include<bits/stdc++.h>
using namespace std;
int missing(int a[], int n){
    for(int i =1; i<=n;i++){
        int check = 0;
        for(int j =0; j<n;j++){
            if(a[j]==i){
                check = 1;
                break;
            }
        }
        
        if(check == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[] = {1,2,3,4,6};
    int n = sizeof(a)/sizeof(a[0]);
    int ans = missing(a,n);
    cout<<ans;
}



//optimised 
#include<bits/stdc++.h>
using namespace std;
int compute(vector<int> a,int n){
    int sum = (n*(n+1))/2;
    int asum = 0;
    for(int i=0;i<n-1;i++){
        asum = asum + a[i];
    }
    int m = sum-asum;
    return m;
}
int main(){
    vector <int> a = {1,2,4,5};
    int n = a.size();
    int missN = compute(a,n);
    cout<<missN;
}



//optimised 2 (WONT WORK IF ARRAY HAS A 0 IN IT !!!!!!!!!!!!!!!!!!!!!!!!!!!)
#include<bits/stdc++.h>
using namespace std;
int compute(vector<int> a,int n){
    int x1 = 0;
    int x2 =0;
    for(int i =0; i <n-1;i++){
        x1 = x1^a[i];
        x2 = x2^(i+1);
    }
    x2 = x2^n;
    return(x1^x2);
}
int main(){
    vector <int> a = {1,2,3,4,6};
    int n = a.size();
    int missN = compute(a,n);
    cout<<missN;
}
