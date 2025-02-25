#include <iostream>
#include <clocale>

using namespace std;

// Определение структуры phone
struct Phone {
    int areaCode;    // Код города
    int stationCode; // Номер телефонной станции
    int subscriber;  // Номер абонента
};

// Прототипы функций
Phone inputPhone();
void displayPhone(const string& label, Phone p);

int main() {
    setlocale(LC_ALL, "ru");

    // Инициализация первого номера вручную
    Phone myPhone = { 212, 767, 8900 };

    // Ввод второго номера пользователем
    cout << "Введите код города, номер станции и номер абонента: ";
    Phone userPhone = inputPhone();

    // Вывод номеров
    displayPhone("Мой номер", myPhone);
    displayPhone("Ваш номер", userPhone);

    return 0;
}

// Функция для ввода телефонного номера
Phone inputPhone() {
    Phone p;
    cin >> p.areaCode >> p.stationCode >> p.subscriber;
    return p;
}

// Функция для вывода телефонного номера
void displayPhone(const string& label, Phone p) {
    cout << label << " (" << p.areaCode << ") " << p.stationCode << "-" << p.subscriber << endl;
}
