#include <iostream>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

class PassGen {

public:
    void displayMessage()
    {
        int passLenght;
        int numOfPasswords;
        char* filename = new char;

        cout << "Yaratish uchun parol uzunligini kiriting: ";
        cin >> passLenght;
        cout << "Yaratish uchun parollar sonini kiriting: ";
        cin >> numOfPasswords;
        cout << "Parol yaratildi: " << numOfPasswords << "." << endl;
        cout << endl;
        cout << "Yozish uchun fayl nomini kiritning: ";
        cin >> filename;

        std::ofstream outFile(filename);

        for (int k = 0; k < numOfPasswords; k++) {
            for (int i = 0; i < passLenght; ++i) {
                numOfChars(passLenght);
                passGenerator(passLenght);
                outFile << password[i];
            }
            outFile << endl;
        }
        outFile.close();

        cout << "Tanlandi va faylga kiritildi " << filename << "" << endl;
    }

    void passGenerator(int passLenght)
    {
        password = new char[passLenght];

        for (int i = 0; i < numOfNumbers; ++i) {
            password[i] = char(rand() % 10 + 48);
        }
        for (int i = numOfNumbers; i < numOfNumbers + numOfBigChars; ++i) {
            password[i] = char(rand() % 26 + 65);
        }
        for (int i = numOfNumbers + numOfBigChars; i < passLenght; ++i) {
            password[i] = char(rand() % 26 + 97);
        }
        std::random_shuffle(password, password + passLenght);
    }

    void numOfChars(int passLenght)
    {
        numOfSmallChars = rand() % passLenght;
        int charRandEnd = passLenght - numOfSmallChars;
        numOfBigChars = rand() % charRandEnd;
        numOfNumbers = passLenght - numOfSmallChars - numOfBigChars;
    }

private:
    int numOfSmallChars;
    int numOfBigChars;
    int numOfNumbers;
    char* password;
};

int main()
{
    srand(time(NULL));
    PassGen* pass = new PassGen;
    pass->displayMessage();
    return 0;
}