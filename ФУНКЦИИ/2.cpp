#include <iostream>
using namespace std;
double power(double n, int p = 2);
int main() {
    setlocale(LC_ALL, "rus");
    double number;
    int exponent;
    char choice;
    cout << "Введите число: ";
    cin >> number;
    cout << "Хотите ввести степень? (1-да, 2-нет): ";
    cin >> choice;
    if (choice == '1') {
        cout << "Введите степень: ";
        cin >> exponent;
        cout << "Результат: " << power(number, exponent) << endl;
    }
    else {
        cout << "Результат: " << power(number) << endl;
    }
    return 0;
}
double power(double n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}
