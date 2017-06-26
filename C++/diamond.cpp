/*
 * Write a program that prints the following diamond shape:

 				  *
 				 ***
 				*****
 				 ***
 				  *
 */

#include <iostream>
#include <string>

using namespace std;

void print_diamond(int rows)
{
	int number_of_times = (rows/2) + 1;

	int padding = rows - 2;
	int num = 1;

	for (int i = 1; i <= number_of_times; i++)
	{
		string space (padding, ' ');
		string star (num, '*');
		cout << space << star << endl;
		padding--;
		num += 2;
	}

	num -= 2;
	padding += 1;

	for (int j = 1; j <= number_of_times-1; j++)
	{
		padding++;
		num -= 2;
		string space (padding, ' ');
		string star (num, '*');
		cout << space << star << endl;
	}
}

void print_even_diamond(int rows)
{
	int number_of_times = (rows/2);

	int padding = rows - 1;
	int num = 1;

	for (int i = 1; i <= number_of_times; i++)
	{
		string space (padding, ' ');
		string star (num, '*');
		cout << space << star << endl;
		padding--;
		num += 2;
	}

	for (int j = 1; j <= number_of_times; j++)
	{
		padding++;
		num -= 2;
		string space (padding, ' ');
		string star (num, '*');
		cout << space << star << endl;
	}
}

int main()
{
	int n;
	cout << "Input odd number of rows: ";
	cin >> n;

	if (n%2 == 0)
		print_even_diamond(n);
	else
		print_diamond(n);

}
