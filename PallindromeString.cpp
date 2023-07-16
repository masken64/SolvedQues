#include <bits/stdc++.h>

using namespace std;
bool compute(int i , string s){
    if(i>=s.size()) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return compute(i+1,s);
}

int main()
{
    string s= "MADAM";
    bool ans = compute(0,s);
    cout<<ans;
}
