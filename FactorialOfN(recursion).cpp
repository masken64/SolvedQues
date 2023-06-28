#include<bits/stdc++.h>
using namespace std;
void fac(int a, int f){
      if(a<1) //if a becomes less than 1 we break the recursion and output the value of factorial.
      {
            cout<<f; return;
         }
     fac(a-1,f*a); //reducing a and multiplying the value of every iteration with f, which is equal to 1 when initialised. eg, 4! = 4x3x2x1 break and cout f.
}

int main(){
    int a;
    
    cin>>a;
    fac(a,1);

}
