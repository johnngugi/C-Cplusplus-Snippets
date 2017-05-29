#include <iostream>
using namespace std;
/*
 * Function Objects (functors)
 *
 */
// Example

class X
{
public:
	void operator() (string str) {
		cout << "Calling functors X with parameter " << str << endl;
	}
};

int main()
{
	X foo;
	foo("Hi"); // Calling functor X with parameter Hi
}

/*
 * Benefits of functors:
 * 1. Smart fucntion: capabilities beyond operator()
 *    It can remember state.
 * 2. It can have its own type.

