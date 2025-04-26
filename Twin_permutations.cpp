#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++)
    {
      int x;
      cin >> x;
      cout << (n + 1 - x)<<" ";
    }
    cout << endl;
  }
  return 0;
}