#include <iostream>
using namespace std;
long hms_to_secs(int hours, int minutes, int seconds);
int main() {
    setlocale(LC_ALL, "rus");
    int hours, minutes, seconds;
    char choice;
    do {
        cout << "Введите часы, минуты и секунды: ";
        cin >> hours >> minutes >> seconds;
        long total_seconds = hms_to_secs(hours, minutes, seconds);
        cout << "Эквивалент в секундах: " << total_seconds << " сек." << endl;
        cout << "Хотите ввести новое время? (1-да, 2-нет): ";
        cin >> choice;
    } while (choice == '1');
    return 0;
}
long hms_to_secs(int hours, int minutes, int seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}
