#include <iostream>

using namespace std;

void checkArm(int b){
    int sum =0;

 
    while(b!=0){
        b=b%10;
        sum = sum + b*b*b;
        b=b/10;
    }
    if(b==sum){
        cout<<"True "<<sum;
    }
    else {
        cout<<"False "<<sum;
    }
    
}

int main()
{
    int a;
    cout<<"Please enter a number - "<<endl;
    cin>>a;
    checkArm(a);
    
    }
  
// can also use a while loop.

