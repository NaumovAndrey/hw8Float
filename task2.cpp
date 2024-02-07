#include "pch.h"
#include "iostream"

using namespace std;


/**/

void task2() {
    float health = 1.0;
    float resistance = 1.0;
    float power;

    cout << "Введите количество здоровья орка (от 0 до 1): ";
    cin >> health;

    cout << "Введите сопротивляемость магии орка (от 0 до 1): ";
    cin >> resistance;

    if (health < 0 || health > 1 || resistance < 0 || resistance > 1) {
        cout << "Ошибка ввода! Введите значения от 0 до 1." << endl;
    }

    while (health > 0) {
        cout << "Введите мощность огненного шара (от 0 до 1): ";
        cin >> power;

        if (power < 0 || power > 1) {
            cout << "Ошибка ввода! Введите значения от 0 до 1." << endl;
            continue;
        }

        double damage = power * (1 - resistance);
        health -= damage;

        cout << "Урон от удара: " << fixed << damage << endl;
        cout << "Очки здоровья орка: " << fixed << health << endl;
    }
    cout << "Победа над орком!" << endl;
}
