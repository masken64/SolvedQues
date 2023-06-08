//count digits in an integer by converting it to string.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int input;
    cin>>input;
    string digit = to_string(input);
    cout<<digit.length();
}
