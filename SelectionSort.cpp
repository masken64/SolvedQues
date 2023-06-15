#include<bits/stdc++.h>
using namespace std;
void
sort (int a[], int n)
{
  for (int i = 0; i < n - 1; i++)
    {
      int mini = i;
      for (int j = i + 1; j < n; j++)
	{
	  if (a[j] < a[mini])
	    {
	      mini = j;
	    }
	}
	    //can also use swap(a[mini], a[i]);
      int temp = a[mini];
      a[mini] = a[i];
      a[i] = temp;
    }
  for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
  cout << endl;
}

int
main ()
{
  int a[] = { 3, 2, 6, 8, 1, 0 };
  int n = sizeof (a) / sizeof (a[0]);
  for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
  cout << endl;
  sort (a, n);
}
