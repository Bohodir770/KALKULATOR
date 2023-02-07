#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int i, min_value, max_value;
	int list[10];
	for (i = 0; i < 10; i++) list[i] = rand();
	min_value = list[0];
	for (i = 1; i < 10; i++)
		if (min_value < list[i]) min_value = list[i];
	cout << "maximal son:" << min_value << ' \n';
	max_value = list[0];
	for (i = 1; i < 10; i++)
		if (max_value > list[i]) max_value = list[i];
	cout << "minimal son: " << max_value << '\n';
	return 0;
}