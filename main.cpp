// Командный проект. Группа ПИ-52.
// Команда: Ворожцов (в. 29, техлид), Гуляев (в. 56), Янчесов (в. 4).
#include <iostream>
#include <clocale>
#include "yanchesov.h"
#include "vorozhtsov.h"
#include "gulyaev.h" 

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

int main() {
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#else
    setlocale(LC_ALL, "");
#endif

    int choice;
    double U, R, I;
    double x, lo, hi; 
    double a, b, c, h;

    do {
        cout << "\n=== Командный проект: сборник расчётов ===\n";

        cout << "1. Вычислить силу тока (I) (Ворожцов)\n";
        cout << "2. Вычислить электрическое сопротивление (R) (Ворожцов)\n";
        cout << "3. Вычислить электрическую мощность (P) (Ворожцов)\n";
        cout << "4. Модуль числа (Гуляев)\n";
        cout << "5. Знак числа (Гуляев)\n";
        cout << "6. Ограничение диапазона (Гуляев)\n";
        cout << "7. Площадь треугольника (Янчесов)\n";
        cout << "8. Периметр треугольника (Янчесов)\n";

        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\n--- Расчет силы тока (I = U / R) ---\n";
            cout << "Введите напряжение U (в Вольтах, В): ";
            cin >> U;
            cout << "Введите сопротивление R (в Омах, Ом): ";
            cin >> R;
            cout << "---------------------------------------------\n";
            cout << "РЕЗУЛЬТАТ: Сила тока I = " << current(U, R) << " А (Ампер)\n";
            break;

        case 2:
            cout << "\n--- Расчет сопротивления (R = U / I) ---\n";
            cout << "Введите напряжение U (в Вольтах, В): ";
            cin >> U;
            cout << "Введите силу тока I (в Амперах, А): ";
            cin >> I;
            cout << "---------------------------------------------\n";
            cout << "РЕЗУЛЬТАТ: Сопротивление R = " << resistance(U, I) << " Ом\n";
            break;

        case 3:
            cout << "\n--- Расчет мощности (P = U * I) ---\n";
            cout << "Введите напряжение U (в Вольтах, В): ";
            cin >> U;
            cout << "Введите силу тока I (в Амперах, А): ";
            cin >> I;
            cout << "---------------------------------------------\n";
            cout << "РЕЗУЛЬТАТ: Электрическая мощность P = " << electricPower(U, I) << " Вт (Ватт)\n";
            break;

        case 4:
            cout << " Введите число x: ";
            cin >> x;
            cout << " Результат (Модуль) = " << absValue(x) << "\n";
            break;

        case 5:
            cout << " Введите число x: ";
            cin >> x;
            cout << " Результат (Знак числа) = " << sign(x) << "\n";
            break;

        case 6:
            cout << " Введите число x: ";
            cin >> x;
            cout << " Введите нижнюю границу (lo): ";
            cin >> lo;
            cout << " Введите верхнюю границу (hi): ";
            cin >> hi;

            if (lo > hi) {
                cout << " Ошибка: нижняя граница не может быть больше верхней!\n";
            }
            else {
                cout << " Результат (clamp) = " << clamp(x, lo, hi) << "\n";
            }
            break;

        case 7:
            cout << "Введите сторону a (м) и высоту h (м): ";
            cin >> a >> h;
            cout << "Площадь (метры куб.) = " << triangleArea(a, h) << "\n";
            break;

        case 8:
            cout << "Введите стороны a (м), b (м) и c (м): ";
            cin >> a >> b >> c;
            cout << "Периметр (метров) = " << trianglePerimeter(a, b, c) << "\n";
            break;

        case 0:
            cout << "Работа завершена.\n";
            break;

        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}