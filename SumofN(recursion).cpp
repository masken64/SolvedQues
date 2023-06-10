#include<bits/stdc++.h>
using namespace std;
void n(int a, int sum){
     
     if(a<1) {
         
         cout<<sum; return;
         
     }
     
     n(a-1,sum+a);
}
int main(){
    int a;
    
    cin>>a;
    n(a,0);

}
