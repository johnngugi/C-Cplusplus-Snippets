#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;
// Every container has an iterator and a const_iterator
int main()
{
	set<int>::iterator itr;
	set<int>::const_iterator citr; // Read only access to container elements

	set<int> myset = {2, 4, 5, 1, 9};
	for (citr = myset.begin(); citr != myset.end(); ++citr) { // ++citr faster than citr++
		cout << *citr << endl;
	}

	/* for_each(myset.cbegin(), myset.cend(), MyFunction); This will apply MyFunction to every element
	 * in the container. C++ 11 Only
	 */

	// Iterator Functions:
	/*
	 * advance(itr, 5); // Move itr forward 5 spots.
	 * distance(itr1, itr2); // Measure the distance between itr1 and itr2
	 */

	// Insert Iterator:
	vector<int> vec1 = {4, 5};
	vector<int> vec2 = {12, 14, 16, 18};
	vector<int>::iterator it = find(vec2.begin(), vec2.end(), 16);
	insert_iterator< vector<int> > i_itr(vec2, it);
	copy(vec1.begin(), vec1.end(), i_itr); // vec2: {12, 14, 4, 5, 16, 18}
	// Other insert iterators: back_insert_iterator, front_insert_iterator


	// Stream Iterator:
	/*
	 * vector<string> vec4;
	 * copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(vec4));
	 * copy(vec4.begin(), vec4.end(), ostream_iterator<string>(cout, " "));
	 */

	// Reverse Iterator:
	vector<int> vec = {4, 5, 6, 7};
	reverse_iterator< vector<int>::iterator > ritr;
	for (ritr = vec.rbegin(); ritr != vec.rend(); ritr++)
		cout << *ritr << endl; // Prints 7 6 5 4

}
