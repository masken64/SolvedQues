//Move all Zeros to the end of the array
//Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to 
// the front by maintaining their order.


//BruteForce 
//Time Complexity: O(N) + O(X) + O(N-X) ~ O(2*N), where N = total no. of elements,
//X = no. of non-zero elements, and N-X = total no. of zeros.
//Reason: O(N) for copying non-zero elements from the original to the temporary array. O(X) for again copying it back from the temporary to the original array. 
//O(N-X) for filling zeros in the original array. So, the total time complexity will be O(2*N).

//Space Complexity: O(N), as we are using a temporary array to solve this problem and the maximum size of the array can be N in the worst case.
//Reason: The temporary array stores the non-zero elements. In the worst case, all the given array elements will be non-zero.
#include<bits/stdc++.h>
using namespace std;
void zero(int a[], int n){
    vector<int> temp;
    for(int i =0;i<n;i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    int nt = temp.size();
    for(int i =0;i<nt;i++){
        a[i]=temp[i];
    }
    for(int i =nt;i<n;i++){
        a[i] = 0;
    }
    
}
int main(){
    int a[]= {1,2,0,0,3,0,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    zero(a,n);
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

//Optimised
//Time Complexity: O(N), N = size of the array.
//Reason: We have used 2 loops and using those loops, we are basically traversing the array once.
//Space Complexity: O(1) as we are not using any extra space to solve this problem.

#include <bits/stdc++.h>

using namespace std;
vector<int> removeZero(vector<int> a, int n){
    int j =-1;
    for(int i =0;i<n;i++){
        if(a[i]==0){
            j =i;
            break;
        }
    }
    
    if(j==-1) return a;
    
    for(int i = j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    
    return a;
    
}
int main()
{
    vector <int> a = {3,2,1,0,9,0,0,7,6,4};
    int n = a.size();
    vector<int> res = removeZero(a,n);
    for(auto &it : res){
        cout<<it<<" ";
    }
    
}
 

