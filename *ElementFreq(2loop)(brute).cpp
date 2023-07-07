//https://github.com/rishabkumar7/CloudNotes/blob/master/CPP.md#aws-certfied-cloud-practitioner
//https://docs.google.com/document/d/1QKMaGvjx2-VdSO-MH4o7apk0mdlPrSbuhgrUL0I4s-g/edit
//https://digitalcloud.training/category/aws-cheat-sheets/aws-cloud-practitioner/





#include <bits/stdc++.h>
using namespace std;
 
void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
 
    for (int i = 0; i < n; i++) {
 
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
 
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
