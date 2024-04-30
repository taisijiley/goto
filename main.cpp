#include <iostream>
using namespace std;

/* goto */

int main()
{
	cout << "one" << endl;
	goto link; // за место link можно что угодно написать 
	cout << "two" << endl;//пропускает 
	cout << "three" << endl;//пропускает
	link: //заканчивается
	cout << "four" << endl;
	cout << "five" << endl;
}