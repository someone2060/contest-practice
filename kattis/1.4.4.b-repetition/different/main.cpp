//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    while (scanf("%lld %lld", &a, &b) != EOF) {
        printf("%lld\n", abs(a-b));
    }
    return 0;
}