// checking if a number is an armstrong number
#include <bits/stdc++.h>

using namespace std;

int armstrong(int a){
    int sum =0;
    int r;
    while(a!=0){
        r=a%10;
        sum = sum+ r*r*r;
        a=a/10;
    }
    return sum;
}

int main()
{
    int a;
    cin>>a;
    cout<<armstrong(a);
    
}
