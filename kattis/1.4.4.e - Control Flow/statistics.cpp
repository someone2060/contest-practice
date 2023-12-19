//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int k;
  int caseNum = 1;
  while (scanf("%d", &k) != EOF) {
    int min, max;
    bool initialized = false;
    int in;
    while (k--) {
      scanf("%d", &in);
      if (!initialized) {
        min = in, max = in;
        initialized = true;
      } else {
        if (in < min) min = in;
        else if (in > max) max = in;
      }
    }
    printf("Case %d: %d %d %d\n", caseNum, min, max, max-min);
    caseNum++;
  }
  return 0;
}