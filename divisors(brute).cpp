//prinitng all divisors of a number using bruteforce
#include <bits/stdc++.h>
using namespace std;
void divisorsBruteforce(int a){
    for(int i =1; i<=a;i++){
        if(a%i==0) cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int a;
    cin>>a;
    divisorsBruteforce(a);
}
