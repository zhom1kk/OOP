#include <iostream>

using namespace std;

// Структура для хранения дроби
struct Fraction {
    int numerator;
    int denominator;
};

// Функции для работы с дробями
void inputFraction(Fraction& frac);
Fraction addFractions(const Fraction& frac1, const Fraction& frac2);
void displayFraction(const Fraction& frac);

int main() {
    setlocale(LC_ALL, "Russian");

    Fraction frac1, frac2, result;

    // Ввод первой дроби
    cout << "Введите первую дробь (числитель и знаменатель через пробел): ";
    inputFraction(frac1);

    // Ввод второй дроби
    cout << "Введите вторую дробь (числитель и знаменатель через пробел): ";
    inputFraction(frac2);

    // Сложение дробей
    result = addFractions(frac1, frac2);

    // Вывод результата
    cout << "Результат сложения: ";
    displayFraction(result);
    cout << endl;

    return 0;
}

// Функция для ввода дроби
void inputFraction(Fraction& frac) {
    cin >> frac.numerator >> frac.denominator;
    if (frac.denominator == 0) {
        cout << "Ошибка: знаменатель не может быть равен нулю!" << endl;
        exit(1);
    }
}

// Функция для сложения двух дробей
Fraction addFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result.numerator = frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator;
    result.denominator = frac1.denominator * frac2.denominator;
    return result;
}

// Функция для вывода дроби
void displayFraction(const Fraction& frac) {
    cout << frac.numerator << "/" << frac.denominator;
}
