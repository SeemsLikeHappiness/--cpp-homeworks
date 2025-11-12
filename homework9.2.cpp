#include <iostream>
#include <locale>
using namespace std;

void increase(int& x) {
    x += 10;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int number;

    cout << "Введите число: ";
    cin >> number;

    increase(number);

    cout << "Новое значение: " << number << endl;

    return 0;
}