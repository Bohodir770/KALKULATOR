#include <iostream>
using namespace std;
int main()
{
	int balance;
	int *bank;
	int click;

	balance = 3200;
	bank = &balance;
	click = *bank;
	cout << "balans teng:" << click<<'\n';

	return 0;
}
