#include <iostream>

using namespace std;

// Перечисляемый тип для должностей
enum etype { laborer, secretary, manager, accountant, executive, researcher };

// Функция для ввода должности (прототип)
etype inputEtype();
// Функция для вывода должности (прототип)
void displayEtype(etype e);

int main() {
    setlocale(LC_ALL, "Russian");

    // Ввод должности
    cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher): ";
    etype empType = inputEtype();

    // Вывод должности
    cout << "Полное название должности: ";
    displayEtype(empType);

    return 0;
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
    case laborer: cout << "laborer" << endl; break;
    case secretary: cout << "secretary" << endl; break;
    case manager: cout << "manager" << endl; break;
    case accountant: cout << "accountant" << endl; break;
    case executive: cout << "executive" << endl; break;
    case researcher: cout << "researcher" << endl; break;
    }
}