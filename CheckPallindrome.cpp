//check if a number is a pallindroma and return true or false
#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int x) {
        if (x < 0) return false;  //checking condition if x<0
        long r=0;
        int y=x; //creating new variable so that we can check for pallindrome
        while(y!=0){
            r=r*10+y%10;  //extracting last digit and reversing the number
            y=y/10; //removing last digit
        }
        return r==x;  //bool check
    }
    
int main(){
    int x=0;
    cin>>x; //taking input
    cout<<Palindrome(x);
    
}

