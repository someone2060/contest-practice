//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  // in
  int N;
  cin >> N;
  vector<int> f(N);
  for (int i=0; i<f.size(); i++) {
    cin >> f[i];
  }
  // calc
  int index = 1, maxTemp = 40;
  for (int i=1; i<f.size()-1; i++) {
    if (max(f[i-1], f[i+1]) < maxTemp) {
      maxTemp = max(f[i-1], f[i+1]);
      index = i;
    }
  }
  // out
  cout << index << " " << maxTemp;
  return 0;
}