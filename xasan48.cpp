#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	float num1 = 0;
	float num2 = 0;

	cout << "birinchi sonni kiriting: ";
	cin >> num1;
	cout << "ikkinchi sonni kiriting: ";
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

	cout << "orta arifmetigi: ";
	cout << num1 << " + " << num2 << " / " << 2 << " = ";
	cout << (num1 + num2) / 2 << endl;

	cout << endl;

	return 0;
}
