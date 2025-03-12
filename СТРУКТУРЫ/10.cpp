#include <iostream>

using namespace std;

// Структура для хранения суммы в старой английской системе
struct Sterling {
    int pounds;
    int shillings;
    int pence;
};

// Функция для конвертации десятичных фунтов в старую систему
Sterling convertToSterling(double decimalPounds);
void displaySterling(const Sterling& s);

int main() {
    setlocale(LC_ALL, "Russian");

    double decimalPounds;

    // Ввод суммы в десятичных фунтах
    cout << "Введите сумму в десятичных фунтах: ";
    cin >> decimalPounds;

    // Конвертация и вывод результата
    Sterling oldSystemAmount = convertToSterling(decimalPounds);
    displaySterling(oldSystemAmount);

    return 0;
}

// Функция для конвертации десятичных фунтов в старую систему
Sterling convertToSterling(double decimalPounds) {
    Sterling s;

    s.pounds = static_cast<int>(decimalPounds);
    double fractionalPounds = decimalPounds - s.pounds;

    int totalPence = static_cast<int>(fractionalPounds * 240 + 0.5); // 1 фунт = 240 пенсов
    s.shillings = totalPence / 12; // 1 шиллинг = 12 пенсов
    s.pence = totalPence % 12;

    return s;
}

// Функция для вывода суммы в старой системе
void displaySterling(const Sterling& s) {
    cout << "Сумма в старой системе: " << s.pounds << " фунтов, "
        << s.shillings << " шиллингов, " << s.pence << " пенсов." << endl;
}
