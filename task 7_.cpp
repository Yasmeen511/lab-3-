#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Enter an integer value:";
	cin >> x;
	switch (x % 2)
	{
	case 1:
		cout << "odd";
		break;
	case 0:
		cout << "even";
		break;
		return 0;
	}