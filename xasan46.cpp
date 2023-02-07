#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int digit = 0;
	double digit2 = 0;
	char symbol = 0;
	bool trueOrFalse = 0;
	cout << "Введите целое число: ";
	cin >> digit;
	cout << "Введите вещественное число: ";
	cin >> digit2;
	cout << "Введите символ: ";
	cin >> symbol;
	cout << "Введите 0 или 1: ";
	cin >> trueOrFalse;
	cout << endl << endl;
	cout << "Целое число: " << digit << endl;
	cout << "Вещественное число: " << digit2 << endl;
	cout << "Символ: " << symbol << endl;
	cout << "bool: " << trueOrFalse << endl;
	return 0;
}
