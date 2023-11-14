#include <iostream>
#include <vector>

using namespace std;

/* i'd normally do this on paper but i'm too lazy to pull out a piece of paper
 * Can be split into 4 quadrants if even; 4 quads and middles if odd
 * a b
 * c d
 * 
 * or 
 * 
 * a|b
 * -+-
 * c|d
 * 
 * 2x2 analysis: (0x0, 0x1, 0x2, 1x1, 1x2, 2x2)
 * possible: 0x1, 0x2, 1x1, 2x2
 * impossible: 1x2
 * Technically can be done with just 2 letters (01000010 is a palindrome, 01000011 isn't) for most of the time
 * Exception is in 0x2 where each 3 letters are used
 * All letters the same in 2x2
 * 
 * 3x3 analysis: (0x0, 0x1, 0x2, 0x3, 1x1, 1x2, 1x3, 2x2, 2x3, 3x3)
 * possible: 0x0, 0x1, 0x2, 0x3, 1x1, 1x2, 1x3, 2x2, 3x3
 * impossible: 2x3
 * 1x3 made through using middle row
 * 0x1, 0x3 needs 3 letters
 * aaa
 * baa
 * bac
 * 
 * 4x4 analysis: (0x0, 0x1, 0x2, 0x3, 0x4, 1x1, 1x2, 1x3, 1x4, 2x2, 2x3, 2x4, 3x3, 3x4, 4x4)
 * possible: 0x0-0x4, 1x1, 1x2, 1x3
 * impossible: 1x4, 3x4
 * 0x4 needs 3 letters
 * aaaa
 * aaaa
 * abbb
 * abbb
*/

int main() {
    // input
    int N;
    cin >> N;
    int M;
    cin >> M;
    int R;
    cin >> R;
    int C;
    cin >> C;

    // calc
    return 1;
}