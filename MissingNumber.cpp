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

