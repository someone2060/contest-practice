//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int p, a, b, c, d, n;
double price(int k)
{
  return p * (sin(a*k + b) + cos(c*k + d) + 2);
}

int main()
{
  scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);
  double highest, decline;
  highest = 0;
  decline = 0;
  for (int i=0; i<n; i++) {
    double crnt = price(i+1);
    if (highest-crnt > decline) decline = highest-crnt;
    if (crnt > highest) highest = crnt;
  }
  printf("%.9f", decline);
  return 0;
}