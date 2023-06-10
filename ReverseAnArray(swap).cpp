#include<iostream>
using namespace std;
int main(){
    int a[] = {3,5,1,8};
    int n =4;
    int p1 =0; int p2 = n-1;
    while(p1<p2){
        swap(a[p1],a[p2]);
        p1++;p2--;
    }
    
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
  
    

}

