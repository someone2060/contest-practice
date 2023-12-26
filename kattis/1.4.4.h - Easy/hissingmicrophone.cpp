//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  if (s.length() == 1) cout << "no hiss";
  for (int i=0; i<s.length()-1; i++) {
    if (s[i] == 's' &&
        s[i+1] == 's') {
      cout << "hiss";
      break;
    }
    if (i == s.length()-2) cout << "no hiss";
  }
  return 0;
}