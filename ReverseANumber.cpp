//reverse integer, if the output goes beyond int then cout 0.

#include<bits/stdc++.h>
using namespace std;
int main(){
	int input;
	cin>>input;
	long reverse;
	while(input!=0){
		reverse = reverse*10+input%10;
		input = input/10;
	}
	if(reverse<INT_MIN || reverse>INT_MAX){
	    cout<<0;
	}
	else cout<<reverse;
}
