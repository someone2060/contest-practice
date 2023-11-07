#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    printf("Thank you, %s, and farewell!", S.c_str());
    return 0;
}