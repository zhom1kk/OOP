#include <iostream>
#include <clocale>

using namespace std;

// Определение структуры для представления точки
struct Point {
    int x;
    int y;
};

// Прототипы функций
Point inputPoint();
void displayPoint(const string& label, Point p);
Point addPoints(Point p1, Point p2);

int main() {
    setlocale(LC_ALL, "ru");

    // Ввод точек p1 и p2
    cout << "Введите координаты точки p1: ";
    Point p1 = inputPoint();

    cout << "Введите координаты точки p2: ";
    Point p2 = inputPoint();

    // Вычисление суммы точек
    Point sum = addPoints(p1, p2);

    // Вывод результата
    cout << "Координаты точки p1 + p2 равны ";
    displayPoint("", sum);

    return 0;
}

// Функция для ввода координат точки
Point inputPoint() {
    Point p;
    cin >> p.x >> p.y;
    return p;
}

// Функция для вывода точки
void displayPoint(const string& label, Point p) {
    cout << label << p.x << "." << p.y << endl;
}

// Функция для сложения двух точек
Point addPoints(Point p1, Point p2) {
    return { p1.x + p2.x, p1.y + p2.y };
}
