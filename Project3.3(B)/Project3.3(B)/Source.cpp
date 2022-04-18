#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
	Pair a, b;
	cin >> a >> b;

	if (a == b)
		cout << "True\n";
	else
		cout << "False\n";

	
	Complex x, y;
	cin >> x >> y;
	cout << x + y << endl;
	cout << x * y << endl;

	if (x == y)
		cout << "True\n";
	else
		cout << "False\n";

	return 0;
}