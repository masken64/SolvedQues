//HCF of 2 numbers without using recursion 

#include<bits/stdc++.h>
using namespace std;
int compute(int a, int b){
    int s = min(a,b); //find min
    if(a%s==0 && b%s==0){			//check if its divisible
        return s;
    }
    
    for(int i = s/2;i>=2;i--){   //verify till smalles number /2 till 2
        if(a%s==0 && b%s==0){
        return i;
    }
    
    
    }
    return 1;   // output 1 if no gcf/hcf
}
int main(){
    int a, b;
    cin>>a>>b;
    int ans = compute(a,b);
    cout<<ans;
}

******************************************************************************************

//Write a program to find the sum of A.P series

/*Sum of arithmetic series is ((n / 2) * (2 * a + (n - 1) * d))
           Where
               a is First term
               d is Common difference
               n is No of terms */

#include<bits/stdc++.h>
using namespace std;
int compute(int a, int d, int n){
    int sum = 0;
    for(int i =0; i<n;i++){
        sum = sum+a;
        a= a+d;
 
    }
    return sum;
}
int main(){
    int a, d,n;
    cin>>a>>d>>n;
    int ans = compute(a,d,n);
    cout<<ans;
}			   

*****************************************************************************
//Write a program to Change Decimal Number to Binary

#include<bits/stdc++.h>
using namespace std;
int compute(int n){
    int rem, i=1;
    int ans = 0;
    while(n!=0){
        int rem = n%2;
        n=n/2;
        ans = ans+rem*i;  
        i=i*10;
        
    }
    
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans = compute(n);
    cout<<ans;
}

************************************************************************