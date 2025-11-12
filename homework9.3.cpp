#include <iostream>
#include <locale>
using namespace std;

long long factorial(int n);

int main() {
    setlocale(LC_ALL, "Russian");

    int number;

    cout << "Введите число: ";
    cin >> number;

    if (number < 0) {
        cout << "Факториал отрицательного числа не определен!" << endl;
    }
    else {
        long long result = factorial(number);
        cout << "Факториал: " << result << endl;
    }

    return 0;
}

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}