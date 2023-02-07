#include <iostream>
using namespace std;
int main(int argc,  char *argv[])
{
	int t, i;
	for (t = 0; t < argc; ++t) {
		i = 0;
		while (argv[t][i]) {
			cout << argv[t][i];
			++i;
		}
		cout << ' ';
	}
	return 0;
}

