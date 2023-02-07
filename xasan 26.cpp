#include <iostream>
using namespace std;
int main()
{
	double* p;
	int o;
	p = new doouble[10];
	for (i = 0; i < 10; i++) p[i] = 100.00 + i;
	for (i = 0; i < 10; i++) cout << p[i] << " ";
	delete [] p;
	return 0;
}
