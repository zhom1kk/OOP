#include <iostream>

using namespace std;

// Структура для хранения времени
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Функции для работы с временем
void inputTime(Time& t);
long calculateTotalSeconds(const Time& t);
void displayTimeInSeconds(const Time& t);

int main() {
    setlocale(LC_ALL, "Russian");

    Time t1;

    // Ввод времени
    cout << "Введите время (часы, минуты, секунды через пробел): ";
    inputTime(t1);

    // Вычисление и вывод общего количества секунд
    displayTimeInSeconds(t1);

    return 0;
}

// Функция для ввода времени
void inputTime(Time& t) {
    cin >> t.hours >> t.minutes >> t.seconds;
    if (t.hours < 0 || t.minutes < 0 || t.minutes >= 60 || t.seconds < 0 || t.seconds >= 60) {
        cout << "Ошибка: некорректный ввод времени!" << endl;
        exit(1);
    }
}

// Функция для вычисления общего количества секунд
long calculateTotalSeconds(const Time& t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

// Функция для вывода общего количества секунд
void displayTimeInSeconds(const Time& t) {
    cout << "Общее количество секунд: " << calculateTotalSeconds(t) << endl;
}
