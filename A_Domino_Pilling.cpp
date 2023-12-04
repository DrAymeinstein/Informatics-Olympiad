// Very nice problem for maths beginners :
// Source: https://codeforces.com/problemset/problem/50/A

/*
A. Domino piling
You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. 
You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:
1. Each domino completely covers two squares.
2. No two dominoes overlap.
3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.
Find the maximum number of dominoes, which can be placed under these restrictions.

Input
In a single line you are given two integers M and N — board sizes in squares (1 ≤ M ≤ N ≤ 16).

Output
Output one number — the maximal number of dominoes, which can be placed.

Examples:
input
2 4
output
4
input
3 3
output
4
*/

// My solution:

#include <iostream>

using namespace std;

int main() {
	int N;
	int M;

	cin >> N >> M;
	
	int parity = N * M % 2;

	cout << (N * M - parity) / 2 << endl;

	return 0;
}

// Explanation:
/*
Each domino is of length 2 and width 1, which implements that their surface area is 2
The area of the board is N × M is either even or odd, if it is even, it is divisible by 2, therefore can be divided equally
but if it is odd N×M == 1 [2] which give us an extra square
*/
