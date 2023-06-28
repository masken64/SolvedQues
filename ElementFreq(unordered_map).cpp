#include<bits/stdc++.h>
using namespace std;
void freq(int a[], int n){
  unordered_map<int,int> map; 
  for(int i =0; i<n; i++){ 
    map[a[i]]++;
  }
  for(auto x : map){
    cout<<x.first<<" "<<x.second<<endl; //outputting frequency of elements.
  }
}
int main(){
  int a[]= {3,2,2,5,1,6};
  int n = sizeof(a)/sizeof(a[0]); // used to find length of an array, total size/size of 1 element.
  freq(a,n);
  return 0;
}
