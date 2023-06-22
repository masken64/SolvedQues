//bruteforce approach
//O(NlogN), O(N)
#include <bits/stdc++.h>
using namespace std;
int asort(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return(arr[arr.size()-1]);
}
int main () 
{
  vector<int> arr = {5,999,3,2,1,88};
  cout<<asort(arr);
}


//optimised approach
//O(N), O(1)
#include <bits/stdc++.h>
using namespace std;
int asort(vector<int>& arr){
    int max = arr[0];
    for(int i =0;i<arr.size();i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main () 
{
  vector<int> arr = {5,9,3,2,1,88};
  cout<<asort(arr);
}
