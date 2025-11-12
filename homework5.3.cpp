#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;

    cout << "Введите N: ";
    cin >> N;

    cout << "Числа от 1 до " << N << ":" << endl;
    for (int i = 1; i <= N; i++) {
        cout << i;
    }
    cout << endl;

    return 0;
}