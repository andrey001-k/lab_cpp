#include <iostream>
using namespace std;

int main() 
{
    // Задача Begin6
    // Оголошення змінних
    double a, b, c, V, S;

    // Введення значень ребер паралелепіпеда
    cout << "Введіть довжину ребра a: ";
    cin >> a;
    cout << "Введіть довжину ребра b: ";
    cin >> b;
    cout << "Введіть довжину ребра c: ";
    cin >> c;

    // Обчислення обсягу
    V = a * b * c;

    // Обчислення площі поверхні
    S = 2 * (a * b + b * c + a * c);

    // Виведення результатів
    cout << "Об'єм паралелепіпеда: " << V << endl;
    cout << "Площа поверхні паралелепіпеда: " << S << endl;
    // Задача Begin18

    double x;
    cout << "Введіть значення x: ";
    cin >> x;

    // Обчислення (x - 3)
    double temp = x - 3;

    // Обчислення (x - 3)^3
    double temp3 = temp * temp * temp;

    // Обчислення (x - 3)^6
    double temp6 = temp3 * temp3;

    // Обчислення значення функції y
    double y = 4 * temp6 - 7 * temp3 + 2;

    cout << "Значення функції y: " << y << endl;
    return 0;
}

