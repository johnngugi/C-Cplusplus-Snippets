#include <iostream>
using namespace std;

// Function Template
template <typename T>
T square(T x) {
	return x*x ;
}

// Class template
template <typename T>
class Bovector
{
	T arr[1000];
	int size;
public:
	Bovector():size(0) {}
	void push(T x) { arr[size] = x; size++ ;}
	T get(int i) const { return arr[i]; }
	int getSize() const { return size; }
	void print() const {for(int i = 0; i < size; i++) {cout << arr[i] << endl;}}
	
};

// Operator overloading function. In this case we're overloading the * operator
template <typename T>
Bovector<T> operator*(const Bovector<T>& rhs1, Bovector<T>& rhs2) {
	Bovector<T> ret;
	for (int i = 0; i < rhs1.getSize(); i++) {
		ret.push(rhs1.get(i) * rhs2.get(i));
	}
	return ret;
}

int main()
{
	cout << "square function: " << endl;
	cout << square<int>(5) << endl;
	cout << square<double>(5.5) << endl;

	Bovector<int> bv;
	bv.push(2);
	bv.push(3);
	bv.push(4);
	bv.push(5);

	cout << "bv print function: " << endl;
	bv.print();

	cout << "Print squared bv: " << endl;
	bv = square(bv);
	bv.print();

	return 0;
}