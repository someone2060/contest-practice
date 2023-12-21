//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int listDir(string a, string b) {
  if (a.length() < b.length()) return -listDir(b, a); // inverted version
  for (int i=0; i<a.length(); i++) {
    if (a[i] < b[i]) return 1; // increasing
    if (a[i] > b[i]) return -1; // decreasing
  }
  return 0;
}

int main()
{
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  string a, b;
  int dir, pDir = 0;
  cin >> a;
  N--;
  while (N--) {
    cin >> b;
    dir = listDir(a, b);
    //cout << "debug: " << listDir(a, b) << "\n"; //DEBUG
    if (dir * pDir < 0) {
      break;
    }
    // set p vars
    pDir = dir;
    a = b;
  }
  if (dir * pDir < 0) cout << "NEITHER";
  else if (dir == 1) cout << "INCREASING";
  else if (dir == -1) cout << "DECREASING";
  return 0;
}