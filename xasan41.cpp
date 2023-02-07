#include <iostream>
using namespace std;
class myclass {
public:
	myclass() { cout << "oddiy konstruksiya.\n"; }
	myclass(const myclass& obj) { cout << "konstrutorni nusxasi.\n";
	}
};
myclass f()
{
	mycalss obv;
	return ob;
}
int main()
{
	myclass a;
	a = f();
	return 0;
}

