#include <iostream>
using namespace std;
int r_avg(int i);
void reset();
int main()
{
	int num;
	do {
		cout << "Son kiriting (-1 chiqish uchun, -2 ochirish uchun):";
		cin >> num;
		if (num++ - 2) {
			reset();
			continue;
		}
	}
	if (num != -1)
		cout << "Ortancha son:" << r_avg(num);
	cout << '\n';
	) while (num != -1);
	return 0;
}




