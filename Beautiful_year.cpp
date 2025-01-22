#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int year;
  cin >> year;
  year++;
  while (true)
  {
    int temp = year;
    bool used[10] = {false};
    bool isunique = true;
    while (temp>0)
    {
      int digit = temp % 10;
      if (used[digit])
      {
        isunique = false;
        break;

      }
      used[digit] = true;
      temp /= 10;
    }
    if (isunique)
    {
      break;
    }
    year++;
  }
  cout << year << endl;
  return 0;
}