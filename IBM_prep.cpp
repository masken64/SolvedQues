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
//Write a program to generate Fibonacci Triangle

#include<bits/stdc++.h>
using namespace std;
void fib(int f[], int N){
    f[1]=1;
    f[2]=1;
    for(int i =3; i<=N;i++){
        f[i]= f[i-1]+f[i-2];
    }
}
void fibTriangle(int n){
    int N = n*(n+1)/2;
    int f[N+1];
    fib(f,N);
    int count =1;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<f[count++]<<" ";
            
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fibTriangle(n);
}

*************************************************************************************

//Remove vowel from a string 

#include<bits/stdc++.h>
using namespace std;
string compute(string s){
    vector<char> v = {'a','e','i','o','u','A','E','I','O','U'};
    for(int i = 0; i<s.length();i++){
        if(find(v.begin(),v.end(),s[i])!=v.end()){
            s = s.replace(i,1,"");
            i=i-1;
        }
    }
    return s;
}
int main (){
    string s;
    cin>>s;
    cout<<compute(s);
}

*****************************************************************************************

//String Pallindrome
#include<bits/stdc++.h>
using namespace std;
bool compute(string s){
    int l=0;
    int n = s.length()-1;
    while(n>l){
        if(s[n--]!=s[l++]){
            return false;
        }

    }
    return true;
}
int main (){
    string s;
    cin>>s;
    cout<<compute(s);
}

//Armstrong 
#include<bits/stdc++.h>
using namespace std;
bool compute(int a){
    int sum =0;
    int n =a;
    int rem = 0;
    while(n!=0){
        rem=n%10;
        sum = sum+ rem*rem*rem;
        n=n/10;
        
    }
    if(sum==a) return true;
    else return false;
}
int main(){
    int a;
    cin>>a;
    cout<<compute(a);
}