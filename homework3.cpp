#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the amount in rubles: ";
    float amount;
    cin >> amount;
    cout << "In dollars: " << amount * 85 << "\n";
    cout << "In euros: " << amount * 100 << "\n";
}
