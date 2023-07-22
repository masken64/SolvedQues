//bruteforce 


#include <bits/stdc++.h>
using namespace std;
void compute(int a[], int n ){
    
    for(int i =0;i<n;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                cnt++;
            }
      
        }
        
        if(cnt>floor(n/2)){
            cout<<a[i];
            break;
        }
    }
}

int main()
{
   int a[] = {2,2,1,1,1,2,2};
   int n = sizeof(a)/sizeof(a[0]);
   compute(a,n);
}