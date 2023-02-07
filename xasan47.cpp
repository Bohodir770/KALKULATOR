#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    char letter1 = 0;
    char letter2 = 0;
    char letter3 = 0;
    char letter4 = 0;
    char letter5 = 0;
    cout << " 5 ta xarfdan iborat kodni kiriting: " << endl;
    cin >> letter1 >> letter2 >> letter3 >> letter4 >> letter5;
    cout << "siz kiritingiz: ";
    cout << letter1 << letter2 << letter3 << letter4 << letter5;
    cout << endl;
    return 0;
}
