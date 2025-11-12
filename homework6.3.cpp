#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string userString;

    cout << "Введите строку: ";
    getline(cin, userString);

    if (!userString.empty()) {
        cout << "Первый символ: " << userString[0] << endl;
    }
    else {
        cout << "Строка пустая!" << endl;
    }

    return 0;
}