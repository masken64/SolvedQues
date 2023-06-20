#include <iostream>

using namespace std;

void bubbleSort(int a[], int n){
    if(n==1) return; // base condition
    for(int i =0; i<=n-2;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);  // can also use thried variable i.e. temp to swap
        }
    }
    bubbleSort(a,n-1);  // recursive call
}

int main()
{
    int a[] = {5,4,3,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Unsorted - ";
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bubbleSort(a,n);
    cout<<"Sorted - ";
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
