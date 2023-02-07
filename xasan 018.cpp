
#include <iostream>
using namespace std;
int find_substr(char* sub, char* str);
int main()
{
	int index;
	index = find_substr("uch", "bir ikki uch tort");
	cout << "Index teng" << index;
	return 0;
}
int find_substr(char* sub, char* str);
{
	int t;
	char* p, * p2;
	for (t = 0; str[t]; t++) {
		p = &str[t];
		p2 = sub;
		while (*p2 && *p2 == *p) {
			p = &str[t];
			p2 = sub;
			while (*p2 && *p2 == *p) {
				p++; p2++;
			}
			if (!*p2) return t;
		}
		return -1;
	}
}