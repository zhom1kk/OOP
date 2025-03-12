#include <iostream>

using namespace std;

// Структура для хранения дроби
struct Fraction {
    int numerator;   // Числитель
    int denominator; // Знаменатель
};

// Функции для работы с дробями
Fraction addFractions(const Fraction& f1, const Fraction& f2);
Fraction subtractFractions(const Fraction& f1, const Fraction& f2);
Fraction multiplyFractions(const Fraction& f1, const Fraction& f2);
Fraction divideFractions(const Fraction& f1, const Fraction& f2);
void inputFraction(Fraction& f);
void displayFraction(const Fraction& f);

// Нахождение наибольшего общего делителя
int gcd(int a, int b);
Fraction simplify(Fraction f);

int main() {
    setlocale(LC_ALL, "Russian");
    Fraction f1, f2, result;
    char operation;

    // Ввод данных
    cout << "Введите первую дробь (числитель и знаменатель через пробел): ";
    inputFraction(f1);
    cout << "Введите вторую дробь (числитель и знаменатель через пробел): ";
    inputFraction(f2);
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;

    // Вычисление результата
    switch (operation) {
    case '+': result = addFractions(f1, f2); break;
    case '-': result = subtractFractions(f1, f2); break;
    case '*': result = multiplyFractions(f1, f2); break;
    case '/': result = divideFractions(f1, f2); break;
    default: cout << "Ошибка: неверная операция!" << endl; return 1;
    }

    // Вывод результата
    cout << "Результат: ";
    displayFraction(result);
    cout << endl;

    return 0;
}

// Функция для ввода дроби
void inputFraction(Fraction& f) {
    cin >> f.numerator >> f.denominator;
    if (f.denominator == 0) {
        cout << "Ошибка: знаменатель не может быть равен 0!" << endl;
        exit(1);
    }
}

// Функция для сложения дробей
Fraction addFractions(const Fraction& f1, const Fraction& f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return simplify(result);
}

// Функция для вычитания дробей
Fraction subtractFractions(const Fraction& f1, const Fraction& f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return simplify(result);
}

// Функция для умножения дробей
Fraction multiplyFractions(const Fraction& f1, const Fraction& f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    return simplify(result);
}

// Функция для деления дробей
Fraction divideFractions(const Fraction& f1, const Fraction& f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    if (result.denominator == 0) {
        cout << "Ошибка: деление на 0!" << endl;
        exit(1);
    }
    return simplify(result);
}

// Функция для вывода дроби
void displayFraction(const Fraction& f) {
    cout << f.numerator << "/" << f.denominator;
}

// Функция для нахождения НОД
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функция для упрощения дроби
Fraction simplify(Fraction f) {
    int divisor = gcd(abs(f.numerator), abs(f.denominator));
    f.numerator /= divisor;
    f.denominator /= divisor;
    return f;
}
