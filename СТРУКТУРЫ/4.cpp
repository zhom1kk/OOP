#include <iostream>

using namespace std;

// Структура для хранения информации о сотруднике
struct Employee {
    int id;
    float salary;
};

// Функция для ввода данных о сотруднике (прототип)
void inputEmployee(Employee& e);
// Функция для вывода данных о сотруднике (прототип)
void displayEmployee(const Employee& e);

int main() {
    setlocale(LC_ALL, "Russian");

    Employee emp1, emp2, emp3;

    // Ввод данных о сотрудниках
    cout << "Введите данные о первом сотруднике:" << endl;
    inputEmployee(emp1);

    cout << "Введите данные о втором сотруднике:" << endl;
    inputEmployee(emp2);

    cout << "Введите данные о третьем сотруднике:" << endl;
    inputEmployee(emp3);

    // Вывод информации о сотрудниках
    cout << "\nИнформация о сотрудниках:" << endl;
    displayEmployee(emp1);
    displayEmployee(emp2);
    displayEmployee(emp3);

    return 0;
}

// Функция для ввода данных о сотруднике
void inputEmployee(Employee& e) {
    cout << "Введите номер сотрудника: ";
    cin >> e.id;
    cout << "Введите величину пособия (в долларах): ";
    cin >> e.salary;
}

// Функция для вывода данных о сотруднике
void displayEmployee(const Employee& e) {
    cout << "Сотрудник №" << e.id << " - Пособие: $" << e.salary << endl;
}
