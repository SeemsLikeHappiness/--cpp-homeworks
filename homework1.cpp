#include <iostream>
using namespace std;
// Программа, выводящая в консоль персональное приветствие

int main()
{
    char userName[30];
    cout << "Enter your name\n";
    cin >> userName;
    cout << "Hello " << userName;
}
