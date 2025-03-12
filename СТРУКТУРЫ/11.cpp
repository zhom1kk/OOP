#include <iostream>
#include <iomanip>

using namespace std;

// Структура для хранения времени
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Функции для работы с временем
void inputTime(Time& t);
long timeToSeconds(const Time& t);
Time secondsToTime(long totalSeconds);
void displayTime(const Time& t);

int main() {
    setlocale(LC_ALL, "Russian");

    Time t1, t2, result;

    // Ввод двух значений времени
    cout << "Введите первое время (часы минуты секунды через пробел): ";
    inputTime(t1);
    cout << "Введите второе время (часы минуты секунды через пробел): ";
    inputTime(t2);

    // Перевод в секунды и сложение
    long totalSeconds = timeToSeconds(t1) + timeToSeconds(t2);

    // Конвертация обратно в формат времени
    result = secondsToTime(totalSeconds);

    // Вывод результата
    cout << "Сумма времени: ";
    displayTime(result);
    cout << endl;

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

// Функция для перевода времени в секунды
long timeToSeconds(const Time& t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

// Функция для перевода секунд обратно в формат времени
Time secondsToTime(long totalSeconds) {
    Time t;
    t.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    t.minutes = totalSeconds / 60;
    t.seconds = totalSeconds % 60;
    return t;
}

// Функция для вывода времени в формате HH:MM:SS
void displayTime(const Time& t) {
    cout << setfill('0') << setw(2) << t.hours << ":"
        << setfill('0') << setw(2) << t.minutes << ":"
        << setfill('0') << setw(2) << t.seconds;
}
