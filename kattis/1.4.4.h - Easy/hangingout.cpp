//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int L, x;
  cin >> L >> x;
  int n = 0;
  int denied = 0;
  while (x--) {
    string event;
    int p;
    cin >> event >> p;
    if (event[0] == 'l') {
      n -= p;
    }
    if (event[0] == 'e') {
      if (n + p > L) denied++;
      else n += p;
    }
  }
  cout << denied;
  return 0;
}