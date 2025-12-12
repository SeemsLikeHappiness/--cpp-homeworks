#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() : width(0.0), height(0.0) {}

    Rectangle(double w, double h) : width(w), height(h) {}

    double getWidth() const { return width; }
    double getHeight() const { return height; }

    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }

    void show() const {
        cout << fixed << setprecision(1);
        cout << "Ширина: " << width << endl;
        cout << "Высота: " << height << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Rectangle rect1(4.0, 3.0);
    rect1.show();
    cout << endl;
    return 0;
}
