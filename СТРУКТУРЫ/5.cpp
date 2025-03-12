#include <iostream>

using namespace std;

// Структура для хранения даты
struct Date {
    int day;
    int month;
    int year;
};

// Функция для ввода даты (прототип)
void inputDate(Date& d);
// Функция для вывода даты (прототип)
void displayDate(const Date& d);

int main() {
    setlocale(LC_ALL, "Russian");

    Date userDate;

    // Ввод даты пользователем
    cout << "Введите дату в формате ДД/ММ/ГГГГ: ";
    inputDate(userDate);

    // Вывод даты на экран
    cout << "Вы ввели дату: ";
    displayDate(userDate);

    return 0;
}

// Функция для ввода даты
void inputDate(Date& d) {
    char separator;
    cin >> d.day >> separator >> d.month >> separator >> d.year;
}

// Функция для вывода даты
void displayDate(const Date& d) {
    cout << d.day << "/" << d.month << "/" << d.year << endl;
}
