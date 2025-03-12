#include <iostream>

using namespace std;

float circarea(float radius) {
    return 3.14189 * radius * radius;
}

int main() {
    setlocale(LC_ALL, "rus");
    float radius;
    cout << "Введите радиус круга: ";
    cin >> radius;

    float area = circarea(radius);
    cout << "Площадь круга: " << area << endl;

    return 0;
}
