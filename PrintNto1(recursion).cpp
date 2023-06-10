#include<bits/stdc++.h>
using namespace std;
void n(int a){
    if(a==0) return;
    cout<<a<<" ";
    n(a-1);
}
int main(){
    int a;
    cin>>a;
    n(a);
}
