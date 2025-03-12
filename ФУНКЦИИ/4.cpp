#include <iostream>
using namespace std;
double maxDistance(double feet1, double inches1, double feet2, double inches2);
int main() {
    setlocale(LC_ALL, "rus");
    double feet1, inches1, feet2, inches2;
    cout << "Введите первую дистанцию (футы и дюймы): ";
    cin >> feet1 >> inches1;
    cout << "Введите вторую дистанцию (футы и дюймы): ";
    cin >> feet2 >> inches2;
    double maxDist = maxDistance(feet1, inches1, feet2, inches2);
    cout << "Наибольшая дистанция: " << maxDist << " футов" << endl;
    return 0;
}
double maxDistance(double feet1, double inches1, double feet2, double inches2) {
    double dist1 = feet1 + inches1 / 12.0;
    double dist2 = feet2 + inches2 / 12.0;
    return (dist1 > dist2) ? dist1 : dist2;
}
