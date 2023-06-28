//optimised recursive approach 

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a; 
    return gcd(b,a%b); //eucledian algo by recursion
    
}
int main(){
    int a; int b;
    cin>>a>>b;
    cout<<gcd(a,b);
}
