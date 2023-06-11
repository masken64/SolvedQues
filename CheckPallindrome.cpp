//check if a number is a pallindroma and return true or false
#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int x) {
        if (x < 0) return false;
        long r=0;
        int y=x;
        while(y!=0){
            r=r*10+y%10;
            y=y/10;
        }
        return r==x;
    }
    
int main(){
    int x=0;
    cin>>x;
    cout<<Palindrome(x);
    
}

