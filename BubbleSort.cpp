#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int n){
    for(int i = n-1; i>=0; i--){   //starting from last element.
        for(int j =0; j<=i-1;j++){   
            if(a[j]>a[j+1]){       //checking if element at j is greater than element at j+1
                int temp = a[j];
                a[j] = a[j+1];    //swapping, can also use swap(a[j], a[j+1];
                a[j+1]= temp;
            }
        }
    }
    cout<<"Sorted Array - "<<endl;
    for(int i =0;i<n;i++){   //printing the sorted array
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[5];
    cout<<"Enter Array"<<endl;
    for(int i =0; i<5;i++){
        cin>>a[i]; //user input
    }
    cout<<"Your array before using bubble sort - "<<endl;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i =0; i<n;i++){
        cout<<a[i]<<" "; //printing array before using bubblesort
    }
    cout<<endl;
    bubbleSort(a,n); //sorting the array
}
