//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

struct IndexTraverse {
  int data;
  bool visited{ false };
};

int main()
{
  std::ios::sync_with_stdio(false);
  int n, t;
  std::cin >> n >> t;
  std::array<int, 200000> a;
  std::vector<IndexTraverse> aTraverse(200000);
  long long out{ 0L };
  int in{ 0 };
  switch (t) {
    case 1: // 7
      std::cout << 7 << '\n';
      break;
    case 2: // comp
      std::cin >> a[0] >> a[1];
      if (a[0] > a[1]) std::cout << "Bigger\n";
      else if (a[0] < a[1]) std::cout << "Smaller\n";
      else std::cout << "Equal\n";
      break;
    case 3: // median
      std::cin >> a[0] >> a[1] >> a[2];
      std::sort(a.begin(), a.begin()+3);
      std::cout << a[1] << '\n';
      break;
    case 4: // sum
      while (n--) {
        std::cin >> in;
        out += in;
      }
      std::cout << out << '\n';
      break;
    case 5: // even sum
      while (n--) {
        std::cin >> in;
        if (in%2 == 0) out += in;
      }
      std::cout << out << '\n';
      break;
    case 6: // string
      while (n--) {
        std::cin >> in;
        std::cout << char((in%26+26)%26 + 97);
      }
      std::cout << '\n';
      break;
    case 7: // traverse a
      for (int i{ 0 }; i<n; i++) {
        std::cin >> aTraverse[i].data;
      }
      while (true) {
        aTraverse[in].visited = true;
        in = aTraverse[in].data;
        if (in < 0 || in >= n) {
          std::cout << "Out\n";
          break;
        }
        if (in == n-1) {
          std::cout << "Done\n";
          break;
        }
        if (aTraverse[in].visited) {
          std::cout << "Cyclic\n";
          break;
        }
      }
      break;
  }
  return 0;
}