#include <iostream>
using namespace std;
int div_zero();
int main()
{
	int i, j, result;
	cout << "Bolinuvchi va boluvchi:";
	cin >> i >> j;
	result = j ? i / j : div_zero() :
		cout << "Natija:" << result;
	return 0;
}
int div_zero()
{
	cout << "Nolga bolish mumkin emas.\n";
	return 0;
}



