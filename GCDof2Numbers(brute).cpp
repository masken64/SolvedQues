//finding GCD of two numbers, bruteforce approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a; int b;
    cin>>a>>b;
    int gcd;
    for(int i=1; i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd =i;
        }
    }
    cout<<gcd;
}
