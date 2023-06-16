#include <bits/stdc++.h>

using namespace std;

void insertion(int a[], int n){
    for(int i =0; i<n;i++){
        int j =i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j-1], a[j]);
            j--;
        }
    }
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[] = {5,4,3,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    insertion(a,n);
}
