//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  int numer = 0, denom = 0;
  while (N--) {
    int in;
    cin >> in;
    if (in >= 0) {
      numer += in;
      denom++;
    }
  }
  cout << numer / (1.0*denom);
  return 0;
}