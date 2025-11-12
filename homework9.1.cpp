#include <iostream>
#include <locale>
using namespace std;

int square(int x);

int main() {
    setlocale(LC_ALL, "Russian");

    int number;

    cout << "Введите число: ";
    cin >> number;

    int result = square(number);
    cout << "Квадрат: " << result << endl;

    return 0;
}

int square(int x) {
    return x * x;
}