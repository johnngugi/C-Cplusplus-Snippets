#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
	/*
	 * Unordered set
	 */

	unordered_set<string> myset = {"red", "green", "blue"};
	unordered_set<string>::const_iterator itr = myset.find("green"); // O(1)
	if (itr != myset.end()) // Important check
		cout << *itr << endl;
	myset.insert("yellow");

	vector<string> vec = {"purple", "pink"};
	myset.insert("yellow"); // O(1)

	// Hash table specific APIs:
	cout << "load_factor = " << myset.load_factor() << endl;
	string x = "red";
	cout << x << " is in bucket #" << myset.bucket(x) << endl;
	cout << "Total bucket #" << myset.bucket_count() << endl;

}

/* Properties of Unordered Containers:
 * 1. Fastest search/insert at any place: O(1)
 * 2. Unordered set/multiset: element value cannot be changed.
 *   Unordered map/multimap: element key cannot be changed.
 */
