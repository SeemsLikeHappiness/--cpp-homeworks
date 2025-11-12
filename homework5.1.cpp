#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    a = a + b;
    b = a - b;    
    a = a - b;   

    cout << "После обмена:" << endl;
    cout << "Первое число: " << a << endl;
    cout << "Второе число: " << b << endl;

    return 0;
}