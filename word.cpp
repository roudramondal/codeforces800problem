#include<bits/stdc++.h>
using namespace std;
int main ()
{
  char c1[1000];
  cin >> c1;

   if ('a'<=c1[0]&&c1[0]<='z')
   {
     c1[0] -= 32;
   }
 
    cout << c1;
}