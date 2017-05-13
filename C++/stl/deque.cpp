/*
 * Deque
 */

#include <deque>
#include <iostream>
using namespace std;

int main()
{
	deque<int> deq = {4, 6, 7};
	deq.push_front(2); // deq: {2, 4, 6, 7};
	deq.push_back(3); // deq: {2, 4, 6, 7, 3};

	// Deque has similar interface with vector
	cout << deq[1] << endl; // 4

	/* Properties:
	 * 1. fast insert/remove at the beginning and end;
	 * 2. slow insert/remove in the middle;
	 * 3. slow search: O(n)
	 */

}
