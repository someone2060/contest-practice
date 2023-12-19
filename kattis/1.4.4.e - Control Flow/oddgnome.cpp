//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  while (N--) {
    int g;
    scanf("%d", &g);
    int first;
    scanf("%d", &first);
    int in;
    bool found = false;
    for (int i=1; i<g; i++) {
      scanf("%d", &in);
      if (in != first+i && !found) {
        printf("%d\n", i+1);
        found = true;
      }
    }
  }
  return 0;
}