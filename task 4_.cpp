#include <iostream>
using namespace std;
int main() {


	double age, weight, length, calories;
	char gender;
	cout << "Enter in order :age, weight, length \n";
	cin >> age >> weight >> length;
	cout << "Enter your gender: 'M' for male or F for female) \n";
	cin >> gender;
	if (gender == 'M') {
		calories = 6.25 * length + 10 * weight - age * 5 + 5;
	}
	else if (gender == 'F') {
		calories = 6.25 * length + 10 * weight - age * 5 - 161;
	}


	cout << "Number of calories=" << calories;




	return 0;
}
