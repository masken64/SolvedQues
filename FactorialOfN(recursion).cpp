#include<bits/stdc++.h>
using namespace std;
void fac(int a, int f){
     
     if(a<1) {
         
         cout<<f; return;
         
     }
     
     fac(a-1,f*a);
}
int main(){
    int a;
    
    cin>>a;
    fac(a,1);

}
