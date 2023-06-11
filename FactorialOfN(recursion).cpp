#include<bits/stdc++.h>
using namespace std;
void fac(int a, int sum){
     
     if(a<1) {
         
         cout<<sum; return;
         
     }
     
     fac(a-1,sum*a);
}
int main(){
    int a;
    
    cin>>a;
    fac(a,1);

}
