#include<bits/stdc++.h>
using namespace std;
void sum(int a, int sum){
     
     if(a<1) {
         
         cout<<sum; return;
         
     }
     
     sum(a-1,sum+a);
}
int main(){
    int a;
    
    cin>>a;
    sum(a,0);

}
