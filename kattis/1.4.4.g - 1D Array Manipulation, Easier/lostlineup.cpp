//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // in
  int N;
  scanf("%d", &N);
  vector<int> line(N, 1);
  int in;
  for (int i=0; i<N-1; i++) {
    scanf("%d", &in);
    line[in+1] = i+2;
  }
  // out
  for (int i : line) {
    printf("%d ", i);
  }
  return 0;
}