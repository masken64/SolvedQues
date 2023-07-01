//Left Rotate the Array by One
//Problem Statement: Given an array of N integers, left rotate the array by one place.

//Bruteforce - Time Complexity: O(n), as we iterate through the array only once, Space Complexity: O(n) as we are using another array of size, same as the given array.

#include<bits/stdc++.h>
using namespace std;
void left(int a[], int n){
    int temp[n];
    for(int i =1;i<n;i++){
        temp[i-1]=a[i];
    }
    temp[n-1]=a[0];
    for(int i =0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}
int main(){
    int a[]= {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    left(a,n);
}


//Optimised - Time Complexity: O(n), as we iterate through the array only once, Space Complexity: O(1) as no extra space is used.

#include<bits/stdc++.h>
using namespace std;
void left(int a[], int n){
    int temp = a[0];
    for(int i =0;i<n-1;i++){
       a[i]=a[i+1];
    }
    a[n-1]=temp;
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]= {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    left(a,n);
}

