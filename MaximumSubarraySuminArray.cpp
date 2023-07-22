//bruteforce

#include <bits/stdc++.h>

using namespace std;

void compute(int a[], int n ){
    int maxi=INT_MIN;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=0;
            for(int x=i;x<j;x++){
                sum = sum+a[x];
            }
            maxi = max(maxi,sum);
        }
    }
    cout<<maxi;
}

int main()
{
   int a[] = {-2,1,-3,4,-1,2,1,-5,4};
   int n = sizeof(a)/sizeof(a[0]);
   compute(a,n);
}


//optimised 
#include <bits/stdc++.h>

using namespace std;

void compute(int a[], int n ){
    int maxi = INT_MIN;
    int sum=0;
    for(int i =0;i<n;i++){
        sum = sum+a[i];
        
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
}

int main()
{
   int a[] = {-2,1,-3,4,-1,2,1,-5,4};
   int n = sizeof(a)/sizeof(a[0]);
   compute(a,n);
}