//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  while (true) {
    int N;
    scanf("%d", &N);
    if (N == -1) break;
    int pHours = 0;
    int miles, hours;
    int total = 0;
    while (N--) {
      scanf("%d %d", &miles, &hours);
      total += miles*(hours-pHours);
      pHours = hours;
    }
    printf("%d miles\n", total);
  }
  return 0;
}