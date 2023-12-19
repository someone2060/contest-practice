//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  while (true) {
    char in[1000000];
    scanf("%1000000s", &in);
    string num, pNum;
    num = in;
    if (num == "END") break;
    int i = 0;
    while (pNum != num) {
      i++;
      pNum = num;
      num = to_string(num.length());
    }
    printf("%d\n", i);
  }
  return 0;
}