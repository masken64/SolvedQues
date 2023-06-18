#include <bits/stdc++.h>

using namespace std;


void mergeSort(int a[], int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}


int main(){
    int a[] = {5,4,3,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting array -"<<endl;
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    mergeSort(a,0,n-1);
    cout<<"After sorting array -"<<endl;
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
