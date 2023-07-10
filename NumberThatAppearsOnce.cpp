//Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.
#include<bits/stdc++.h>
using namespace std;
int compute(vector<int> a,int n){
for( int i =0;i<n;i++){
    int num = a[i];
    int count =0;
    for(int j =0;j<n;j++){
        if(a[j]==num){
            count++;
        }
    }
    
    if(count==1) return num;
}
return -1;
}
int main(){
    vector <int> a = {1,1,2,2,3,3,4,4,5,6,6};
    int n = a.size();
    int ans = compute(a,n);
    cout<<ans;
}
/* Time Complexity: O(N2), where N = size of the given array.
Reason: For every element, we are performing a linear search to count its occurrence. The linear search takes O(N) time complexity. And there are N elements in the array. So, the total time complexity will be O(N2).

Space Complexity: O(1) as we are not using any extra space. */



//optimised 
#include<bits/stdc++.h>
using namespace std;
int compute(vector<int> a,int n){
    int xorr = 0;
for(int i =0;i<n;i++){
    xorr = xorr^a[i];
}
return xorr;
}
int main(){
    vector <int> a = {1,1,0,3,3,4,4,5,5,6,6};
    int n = a.size();
    int ans = compute(a,n);
    cout<<ans;
}
/*Time Complexity: O(N), where N = size of the array.
Reason: We are iterating the array only once.

Space Complexity: O(1) as we are not using any extra space.*/
