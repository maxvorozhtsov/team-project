#include "vorozhtsov.h"
#include <iostream>

using namespace std;

// Сила тока: I = U / R
double current(double U, double R) {
    if (R == 0) {
        cout << "\n[ОШИБКА: Сопротивление R не может быть равно 0 Ом! Деление на ноль.]\n";
        return 0;
    }
    return U / R;
}

// Сопротивление: R = U / I
double resistance(double U, double I) {
    if (I == 0) {
        cout << "\n[ОШИБКА: Сила тока I не может быть равна 0 А! Деление на ноль.]\n";
        return 0;
    }
    return U / I;
}

// Электрическая мощность: P = U * I
double electricPower(double U, double I) {
    return U * I;
}
