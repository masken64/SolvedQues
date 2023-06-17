#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int n){
    for(int i = n-1; i>=0; i--){
        for(int j =0; j<=i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;
            }
        }
    }
    cout<<"Sorted Array - "<<endl;
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[5];
    cout<<"Enter Array"<<endl;
    for(int i =0; i<5;i++){
        cin>>a[i];
    }
    cout<<"Your array before using bubble sort - "<<endl;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bubbleSort(a,n);
}
