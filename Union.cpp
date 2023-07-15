//bruteforce
#include <bits/stdc++.h>

using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  map < int, int > freq;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    freq[arr1[i]]++;
  for (int i = 0; i < m; i++)
    freq[arr2[i]]++;
  for (auto & it: freq)
    Union.push_back(it.first);
  return Union;
}

int main() {
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}





//optimised 
#include <bits/stdc++.h>

using namespace std;

vector<int> compute(int a1[], int a2[], int n, int m) {
    vector<int> U;
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (a1[i] <= a2[j]) {
            if (U.empty() || U.back() != a1[i]) {
                U.push_back(a1[i]);
            }
            i++;
        } else {
            if (U.empty() || U.back() != a2[j]) {
                U.push_back(a2[j]);
            }
            j++;
        }
    }

    while (i < n) {
        if (U.empty() || U.back() != a1[i]) {
            U.push_back(a1[i]);
        }
        i++;
    }

    while (j < m) {
        if (U.empty() || U.back() != a2[j]) {
            U.push_back(a2[j]);
        }
        j++;
    }

    return U;
}

int main() {
    int a1[] = {1, 2, 3, 3, 4};
    int a2[] = {3, 4, 5, 6, 6, 7};
    int n = sizeof(a1) / sizeof(a1[0]);
    int m = sizeof(a2) / sizeof(a2[0]);
    vector<int> U = compute(a1, a2, n, m);

    for (auto it : U) {
        cout << it << " ";
    }
    cout << endl;
}
