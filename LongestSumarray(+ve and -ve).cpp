//brute 



#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++) { // starting index
        for (int j = i; j < n; j++) { // ending index
            // add all the elements of
            // subarray = a[i...j]:
            int s = 0;
            for (int K = i; K <= j; K++) {
                s += a[K];
            }

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main()
{
    vector<int> a = { -1, 1, 1};
    int k = 1;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}







//optimised 

#include <bits/stdc++.h>

using namespace std;

int compute(int a[], int n, int k){
    map<int,int> map;
    int maxL=0;
    int sum=0;
    int len =0;
    for(int i =0;i<n;i++){
        sum = sum+a[i];
    
    if(sum==k){
        maxL = max(maxL,i+1);
    }
    
    int rem = sum-k;
     
    if(map.find(rem)!= map.end()){
        len = i-map[rem];
        maxL = max(maxL,len);
    }
    
    if(map.find(sum)== map.end()){
        map[sum]=i;
    }
    
    }
    
    return maxL;
}

int main()
{
    int a[] ={ -1, 1, 1};
    int k =1;
    int n = sizeof(a)/sizeof(a[0]);
    int l = compute(a,n,k);
    cout<<l;
}
