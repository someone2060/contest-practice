//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    float X;
    scanf("%f", &X);
    printf("%d", int((X*5280000/4854) + 0.5) );
    return 0;
}