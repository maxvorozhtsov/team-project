// Командный проект. Группа ПИ-52.
// Команда: Ворожцов (в. 29, техлид), Гуляев (в. 56), Янчесов (в. 4).
#include <iostream>
#include <clocale>
#include "yanchesov.h"
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
// #include "vorozhtsov.h"
#include "gulyaev.h" 
#include <windows.h>
// #include "yanchesov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int choice;
    double x, lo, hi; 
    double a, b, c, h;
    do {
        cout << "\n=== Командный проект: сборник расчётов ===\n";

        // === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
        cout << "4. Модуль числа (Гуляев)\n";
        cout << "5. Знак числа (Гуляев)\n";
        cout << "6. Ограничение диапазона (Гуляев)\n";
		cout << "7. Площадь треугольника (Янчесов)\n";
        cout << "8. Периметр треугольника (Янчесов)\n";
        // === КОНЕЦ БЛОКА МЕНЮ ===

        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
            // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
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
            // === КОНЕЦ БЛОКА ОБРАБОТКИ ===

        case 0:
            cout << "Работа завершена.\n";
            break;

        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;

}
