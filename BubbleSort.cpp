#include<bits/stdc++.h>
using namespace std;
void
bubble (int a[], int n)
{
  for (int i = n - 1; i >= 0; i--)
    {
      for (int j = 0; j <= i - 1; j++)
	{
	  if (a[j] > a[j + 1])
	    {
		    // can also use swap(a[j],a[j+1]);
	      int temp = a[j + 1];
	      a[j + 1] = a[j];
	      a[j] = temp;
	    }
	}
    }

  for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
    cout<<endl;
}

int
main ()
{
  int a[] = { 5, 2, 1, 7, 4 };
  int n = sizeof (a) / sizeof (a[0]);
  for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
    cout<<endl;
  bubble (a, n);
}
