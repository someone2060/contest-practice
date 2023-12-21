//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  // in
  vector<int> num(3);
  cin >> num[0] >> num[1] >> num[2];
  // bubble sort small -> large
  for (int i=num.size()-1; i>0; i--) {
    for (int j=0; j<i; j++) {
      if (num[j] > num[j+1]) swap(num[j], num[j+1]);
    }
  }
  // out
  if (num[2] - num[1] == num[1] - num[0]) cout << num[2] + (num[2]-num[1]); // last item
  if (num[2] - num[1] > num[1] - num[0]) cout << num[1] + (num[1]-num[0]); // 3rd item
  if (num[2] - num[1] < num[1] - num[0]) cout << num[0] + (num[2]-num[1]); // 2nd item
  return 0;
}