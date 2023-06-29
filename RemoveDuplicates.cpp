//Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. 
//The relative order of the elements should be kept the same.
//If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. 
//It does not matter what you leave beyond the first k elements.
//Note: Return k after placing the final result in the first k slots of the array.

//BruteForce - Time complexity: O(n*log(n))+O(n) , Space Complexity: O(n) 

#include <bits/stdc++.h>
using namespace std;
int duplicate(int arr[], int n){
    set<int> set;
    for(int i =0;i<n;i++){
        set.insert(arr[i]);
    }
    int k = set.size();
    int i =0;
    for(int it : set){
        
          arr[i++] = it;
        
    }
return k;
}

int main()
{
    int arr[] = {1,1,1,1,1,4,4,4,4,3,2,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = duplicate(arr,n);
    for(int i =0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}
