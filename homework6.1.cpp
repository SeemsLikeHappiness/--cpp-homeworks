#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    srand(time(0));

    const int SIZE = 5; 
    int arr[SIZE];      

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 10 + 1; 
    }

    cout << "Элементы массива:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}