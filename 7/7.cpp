#include <iostream>

using namespace std;

// Перечисляемый тип для должностей
enum etype { laborer, secretary, manager, accountant, executive, researcher };

// Структура для хранения даты
struct Date {
    int day;
    int month;
    int year;
};

// Структура для хранения информации о сотруднике
struct Employee {
    int id;
    float salary;
    etype position;
    Date hireDate;
};

// Функции для работы с данными
void inputEmployee(Employee& e);
void displayEmployee(const Employee& e);
etype inputEtype();
void displayEtype(etype e);
void inputDate(Date& d);
void displayDate(const Date& d);

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
    cout << "Введите величину зарплаты (в долларах): ";
    cin >> e.salary;
    cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher): ";
    e.position = inputEtype();
    cout << "Введите дату принятия на работу (ДД/ММ/ГГГГ): ";
    inputDate(e.hireDate);
}

// Функция для вывода данных о сотруднике
void displayEmployee(const Employee& e) {
    cout << "Сотрудник №" << e.id << " - Зарплата: $" << e.salary << ", Должность: ";
    displayEtype(e.position);
    cout << "Дата принятия на работу: ";
    displayDate(e.hireDate);
    cout << endl;
}

// Функция для ввода должности
etype inputEtype() {
    char ch;
    cin >> ch;

    switch (ch) {
    case 'l': return laborer;
    case 's': return secretary;
    case 'm': return manager;
    case 'a': return accountant;
    case 'e': return executive;
    case 'r': return researcher;
    default:
        cout << "Ошибка: некорректный ввод." << endl;
        exit(1);
    }
}

// Функция для вывода должности
void displayEtype(etype e) {
    switch (e) {
    case laborer: cout << "laborer"; break;
    case secretary: cout << "secretary"; break;
    case manager: cout << "manager"; break;
    case accountant: cout << "accountant"; break;
    case executive: cout << "executive"; break;
    case researcher: cout << "researcher"; break;
    }
    cout << endl;
}

// Функция для ввода даты
void inputDate(Date& d) {
    char separator;
    cin >> d.day >> separator >> d.month >> separator >> d.year;
}

// Функция для вывода даты
void displayDate(const Date& d) {
    cout << (d.day < 10 ? "0" : "") << d.day << "/"
        << (d.month < 10 ? "0" : "") << d.month << "/"
        << d.year << endl;
}