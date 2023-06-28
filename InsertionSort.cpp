#include <bits/stdc++.h>

using namespace std;

void insertion(int a[], int n){
    for(int i =0; i<n;i++){  //i is iterating the whole array from 0 to n-1 element
        int j =i;                   //making j=i to iterate over 2 elements
        while(j>0 && a[j-1]>a[j]){    //  condition if j-1 if greater than j then the loop with start
            swap(a[j-1], a[j]);   //swapping elements can also use temp variable to swap
            j--;
        }
    }
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";  //printing the sorted array
    }
    cout<<endl;
}

int main()
{
    int a[] = {5,4,3,2,1,0};
    int n = sizeof(a)/sizeof(a[0]); //size of array
    for(int i =0;i<n;i++){ //printing before sorting
        cout<<a[i]<<" ";  
    }
    cout<<endl;
    insertion(a,n); //calling the algo
}
