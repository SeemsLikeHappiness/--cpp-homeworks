#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int x;

    cout << "Введите число x: ";
    cin >> x;

    if (x < 0) {
        cout << "false" << endl;
        return 0;
    }

    int original = x;
    int reversed = 0;

    while (x > 0) {
        int digit = x % 10;          
        reversed = reversed * 10 + digit; 
        x = x / 10;                
    }

    if (original == reversed) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}