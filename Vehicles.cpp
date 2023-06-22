#include <bits/stdc++.h>
using namespace std;
// find two wheelers and four wheelers by taking in number of vehiles to be produces i.e. v and number of wheels availaible i.e. w.

 
int main () 
{
  int v; // total vehicles
  int w; // total wheels 
  cin >> v;
  cin >> w;
  int x = ((4*v)-w)/2;
 //can also add an if condition to handle error.
  cout<<"TW= "<<x<<" "<<"FW= "<<v-x;

}
