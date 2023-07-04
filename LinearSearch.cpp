/* Linear Search in C
Problem Statement: Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1. */

#include <bits/stdc++.h>
using namespace std;
int main()
{
int a[] = {4,3,2,1,9,7,0};
int n = sizeof(a)/sizeof(a[0]);
int k = 222;
for(int i =0;i<n;i++){
    if(a[i]==k){ 
        cout<<i;
        return 0;       
    }
}
cout<<-1;
}

/*Time Complexity: O(n), where n is the length of the array.

Space Complexity: O(1)*/
