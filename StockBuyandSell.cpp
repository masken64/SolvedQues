//bruteforce 
#include <bits/stdc++.h>

using namespace std;

void compute(int a[], int n ){
    int maxi = INT_MIN;
    int profit =0;
    int maxp = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                profit = max(a[j]-a[i],profit);
            }
            
        }
    }
    cout<<profit;
}

int main()
{
   int a[] = {7,1,5,3,6,4};
   int n = sizeof(a)/sizeof(a[0]);
   compute(a,n);
}

//optimised 
#include <bits/stdc++.h>

using namespace std;

void compute(int a[], int n ){
    int minP = INT_MAX;
    int maxP = 0;
    for(int i =0;i<n;i++){
        minP = min(minP,a[i]);
        maxP = max(maxP,a[i]-minP);
    }
    cout<<maxP;
}

int main()
{
   int a[] = {7,1,5,3,6,4};
   int n = sizeof(a)/sizeof(a[0]);
   compute(a,n);
}