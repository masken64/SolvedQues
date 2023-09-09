//HCF of 2 numbers without using recursion 

#include<bits/stdc++.h>
using namespace std;
int compute(int a, int b){
    int s = min(a,b); //find min
    if(a%s==0 && b%s==0){			//check if its divisible
        return s;
    }
    
    for(int i = s/2;i>=2;i--){   //verify till smalles number /2 till 2
        if(a%s==0 && b%s==0){
        return i;
    }
    
    
    }
    return 1;   // output 1 if no gcf/hcf
}
int main(){
    int a, b;
    cin>>a>>b;
    int ans = compute(a,b);
    cout<<ans;
}