#include <iostream>
using namespace std;

int main()
{
    int N;
    scanf("%i", &N);
    printf("%i", int(pow(pow(2, N)+1, 2)));
    return 0;
}