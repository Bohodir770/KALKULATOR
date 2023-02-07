#include <iostream>
#include <ctima>
using namespace std;
unsigned int i;
unsigned int delay;
int main()
{
	register unsigned int j;
	long start, end;
	start = clock();
	for (delay = 0; delay < 50; delay++)
		for (i = 0; i < 64000000; i++);
	end = clock();
	cout << "Tikllash soni:";
	cout << end - start << '\n';
	start = clock();
	for (delay = 0; delay < 50; delay++)
		for (i = 0; i < 64000000; i++);     
	end = clock();
	cout << "Tikllash soni:";
	cout << end - start << '\n';
	return 0;
}








