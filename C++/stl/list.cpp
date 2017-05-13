/*
 * List
 * --doubly linked list
 */

#include <list>
#include <algorithm>
using namespace std;

int main()
{
	list<int> myList = {5, 2, 9};
	myList.push_back(6); // myList: {5, 2, 9, 6};
	myList.push_front(4); // myList: {4, 5, 2, 9, 6};

	list<int>::iterator itr = find(myList.begin(), myList.end(), 2); // itr->2
	myList.insert(itr, 8); // myList: {4, 5, 8, 2, 9, 6}; // O(1), faster than vector/deque

	itr++; // itr->9
	myList.erase(itr); // myList: {4, 5, 8, 2, 6} O(1)

	/* Properties:
	 * 1. fast insert/remove at any place: O(1)
	 * 2. slow search: O(n)
	 * 3. no random access, no [] operator.
	 */

	// myList1.splice(itr, myList2, itr_1, itr_2);
}
