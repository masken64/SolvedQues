#include <iostream>

using namespace std;

void checkArm(int b){
    int sum =0;

 
    while(b!=0){
        b=b%10; //extraction of last digit.
        sum = sum + b*b*b; // armstrong number check, the number = sum of cubes of the digits.
        b=b/10; //removing the extracted digit.
    }
    if(b==sum){
        cout<<"True "<<sum; //checking if arm or not.
    }
    else {
        cout<<"False "<<sum;
    }
    
}

int main()
{
    int a;
    cout<<"Please enter a number - "<<endl; 
    cin>>a; // taking input from user.
    checkArm(a);
    
    }
  
// can also use a while loop.

