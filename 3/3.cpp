#include <iostream>

using namespace std;

// Структура для хранения расстояния в футах и дюймах
struct Distance {
    int feet;
    float inches;
};

// Структура для хранения объема помещения
struct Volume {
    Distance length;
    Distance width;
    Distance height;
};

// Функция для перевода Distance в футы (прототип)
float toFeet(Distance d);
// Функция для вычисления объема (прототип)
float calculateVolume(Volume v);
// Функция для ввода значений Distance (прототип)
void inputDistance(Distance& d);

int main() {
    setlocale(LC_ALL, "Russian");

    Volume room;

    // Ввод данных от пользователя
    cout << "Введите длину комнаты (футы и дюймы): ";
    inputDistance(room.length);

    cout << "Введите ширину комнаты (футы и дюймы): ";
    inputDistance(room.width);

    cout << "Введите высоту комнаты (футы и дюймы): ";
    inputDistance(room.height);

    // Вычисление объема
    float volume = calculateVolume(room);

    // Вывод результата
    cout << "Объем помещения: " << volume << " кубических футов" << endl;

    return 0;
}

// Функция перевода Distance в футы
float toFeet(Distance d) {
    return d.feet + d.inches / 12.0;
}

// Функция вычисления объема
float calculateVolume(Volume v) {
    float length = toFeet(v.length);
    float width = toFeet(v.width);
    float height = toFeet(v.height);
    return length * width * height;
}

// Функция для ввода данных Distance
void inputDistance(Distance& d) {
    cout << "Футы: ";
    cin >> d.feet;
    cout << "Дюймы: ";
    cin >> d.inches;
}
