#include <iostream>

using namespace std;

int printfib(int n){
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    for(int i =2;i<=n;i++){
        // formula for fib number.
        fib[i] = fib[i-1]+fib[i-2];   
    }
    //printing the generated fib series.
    for(int i =0;i<=n;i++){   
        cout<<fib[i]<<" ";
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    //if input is 0 or 1 no need to run the for loop.
    if(n==0) {
        cout<<0; 
    }
    else if(n==1){
        cout<<0<<" "<<1;
    }
    else {
        printfib(n);
        
    }
}
