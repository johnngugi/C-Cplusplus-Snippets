/**

	Containers:

		There are 3 types:

		Sequence containers(array and linked list):
		vector, deque, list, forward list, array

		Associative Containers(binary tree):
		set, multiset, map, multimap

		Unorderd Containers(hash table):
		unordered set/multiset, unordered map/multimap
*/

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

/* Vector: Dynamic array*/
int main()
{
	vector<int> v; // v.size() == 0
	v.push_back(4);
	v.push_back(10);
	v.push_back(8); // v: {4, 10, 8}; v.size() == 3

	// Vector specific operations
	cout << v[2]; // 8 (no range check)
	cout << v.at(2); // 8 (throw range_error exception of out of range)

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	vector<int>::iterator itr1 = v.begin();
	vector<int>::iterator itr2 = v.end();

	for (vector<int>::iterator itr = itr1; itr!=itr2; ++itr)
		cout << *itr << endl;

	for (it : v) // C++ 11
		cout << it << " ";

	// Vector is a dynamically allocated contiguos array in memory
	int *p = &v[0];

	// Common member funtiions of all Containers.
	// v: {4, 10, 8}
	if (v.empty()) {cout << "Not possible.\n";}

	cout << v.size(); // 3

	vector<int> v2(v); // Copy constructor, v2: {4, 10, 8}

	v.clear(); // Remove all items; v.size() == 0

	v2.swap(v); // v2 becomes empty and v has 3 items.

	// Notes: No penalty of absratction, very efficient

	/* Properties of Vector:
	 * 1. fast insert/remove at the end: o(1)
	 * 2. slow insert/remove at the beginning or in the middle: o(n)
	 * 3. slow search: o(n)
	 */
}
