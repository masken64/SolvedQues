#include<bits/stdc++.h>
using namespace std;
void n(int a, int i){
     
     if(i>a) return;
     cout<<i<<" ";
     n(a,i+1);
}
int main(){
    int a;
    int i =1;
    cin>>a;
    n(a,i);
}
