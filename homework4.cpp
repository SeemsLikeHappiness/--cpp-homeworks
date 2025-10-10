#include <iostream>
using namespace std;

int main() {
    double number;

    cout << "Enter double number: ";
    cin >> number;

    cout << "As double: " << number << endl;

    int intNumber = static_cast<int>(number);
    cout << "As int: " << intNumber << endl;

    bool boolNumber = static_cast<bool>(number);
    cout << "Is the number not equal to 0? " << boolalpha << boolNumber << endl;

    return 0;
}
