
//O(N), O(1)
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n) {
  for (int i = 0; i < n-1; i++)
  // can also use nested for loop insted of usinf i+1; in which j = i+1; j<n-1; j++
    //arr[j]<arr[i], but will have time complexity of O(N2);
    
  {
        if (arr[i] > arr[i+1]){
        return false;
        }
  }
return true;
}
int main() {
  int arr[] = {1,2,3,4,5}, n = 5;
  bool ans = isSorted(arr, n);
  cout<<ans;
}
