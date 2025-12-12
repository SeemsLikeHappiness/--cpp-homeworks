#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const double CX = 2.0;
    const double CY = -1.0;
    const double R = 5.0;
    const double R_SQUARED = R * R;

    double x, y;
    cout << "Введите координаты точки:" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    double distance_squared = pow(x - CX, 2) + pow(y - CY, 2);
    double distance = sqrt(distance_squared);

    cout << fixed << setprecision(2);
    cout << "\nВы ввели точку: P(" << x << ", " << y << ")" << endl;

    cout << "\nРезультат: ";

    const double EPSILON = 1e-6;

    if (distance_squared < R_SQUARED - EPSILON) {
        cout << "Точка внутри окружности" << endl;
    }
    else if (abs(distance_squared - R_SQUARED) < EPSILON) {
        cout << "Точка на границе окружности" << endl;
    }
    else {
        cout << "Точка вне окружности" << endl;
    }

    return 0;
}