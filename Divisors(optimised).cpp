//prinitng divisors using optimised approarch 

#include <bits/stdc++.h>
using namespace std;
void divisor(int a){
    for(int i =1;i<=sqrt(a);i++){
        if(a%i==0) {
            cout<<i<<" ";
            if(i!=a/i) cout<<a/i<<" ";
    }
    
}
}
int main(){
    int a;
    cin>>a;
    divisor(a);
}
