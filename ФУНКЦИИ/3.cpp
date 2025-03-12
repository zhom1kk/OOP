#include <iostream>
using namespace std;
void zeroSmaller(int& a, int& b);
int main() {
    setlocale(LC_ALL, "rus");
    int num1, num2;
    cout << "Введите два числа: ";
    cin >> num1 >> num2;
    zeroSmaller(num1, num2);
    cout << "После обработки: " << num1 << " " << num2 << endl;
    return 0;
}
void zeroSmaller(int& a, int& b) {
    if (a < b) {
        a = 0;
    }
    else {
        b = 0;
    }
}
