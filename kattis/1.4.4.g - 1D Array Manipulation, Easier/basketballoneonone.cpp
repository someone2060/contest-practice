//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  struct {
    char name = 'A';
    int score = 0;
  } a;
  struct {
    char name = 'B';
    int score = 0;
  } b;

  char l, n; // in
  while (true) {
    cin >> l >> n;
    // update score
    if (l == a.name) a.score += int(n)-48;
    else b.score += int(n)-48;
    // check for win
    if (max(a.score, b.score) > 10) {
      if (a.score >= b.score+2) {
        cout << "A";
        break;
      }
      if (b.score >= a.score+2) {
        cout << "B";
        break;
      }
    }
  }
  return 0;
}