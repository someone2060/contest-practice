//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int x;
    while (scanf("%d", &x) != EOF) {
        if (abs(x) % 2 == 1) {
            printf("%d is odd\n", x);
        } else {
            printf("%d is even\n", x);
        }
    }
    return 0;
}