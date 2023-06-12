#include <iostream>

using namespace std;

int main(){
    string a = "KARTIK";
    int p1 =0;
    int p2 =a.size() - 1;
    while(p1<p2){
        swap(a[p1],a[p2]);
        p1++;p2--;
    }
    
    cout<<a;
}
