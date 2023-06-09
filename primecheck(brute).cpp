//check for prime, can be improved 

#include<bits/stdc++.h>
using namespace std;
void prime(int a){
    for(int i=2;i<=a;i++){
        if(a==2) cout<<"prime"; break;
        
        if(a%i==0){
            
            cout<<"not prime";
            break;
        }
        else cout<<"prime";
        break;
    }
}


int main(){
    int a;
    cin>>a;
    
    prime(a);
    
}
