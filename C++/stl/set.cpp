/*
	Associative containers are implemented using a binary tree.

	They are always sorted, default criteria is: <

	No push_back, push_front
 */

/*
 * set
 *
 * - No duplicates
 *
 */

int main()
{
	set<int> myset;
	myset.insert(3); // myset: {3}
	myset.insert(1); // myset: {1, 3}
	myset.insert(7); // myset: {1, 3, 7}  O(log(n))

	set<int>::iterator it;
	it = myset.find(7); // O(log(n)), it points to 7

	pair<set<int>::iterator, bool> ret; // no new element inserted
	ret = myset.insert(3);
	if (ret.second==false)
		it = ret.first; // "it" now points to 3

	myset.insert(it, 9); // myset: {1, 3, 7, 9}  O(log(n)) => O(1), "it" still pointing to 3

	myset.erase(it); // myset: {1, 7, 9}
	myset.erase(7); // myset: {1, 9}
}