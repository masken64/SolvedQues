#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){
    for(int i =0; i<n-1;i++){
        int mini = i;
        for(int j =i+1; j<n;j++){
            if(a[j]<a[mini]){
                mini =j;
            }
        }
        swap(a[i],a[mini]);
    }
    cout<<"Sorted Array - "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int a[] = {5,4,3,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Unsorted array "<<endl;
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    insertionSort(a,n);
}
