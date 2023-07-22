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


//optimised (moore's voting algo)
#include <bits/stdc++.h>

using namespace std;

void compute(int a[], int n ){
    int cnt =0;
    int el = a[0];
    for(int i=0;i<n;i++){
        if(cnt==0){ cnt =1; el=a[i];}
        else if(el==a[i]){ cnt++;}
        else{ cnt--;}
    }
    
    int c1=0;
    for(int i =0;i<n;i++){
        if(a[i]==el) {
            c1++;
        }
        
        if(c1>floor(n/2)){
            cout<<el;
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

