#include "pch.h"
#include "iostream"
#include "cmath"

using namespace std;


/*Напишите программу, которая по заданным F, m и t покажет, на каком расстоянии от первоначального положения окажется космический корабль через t секунд. 
Обеспечьте контроль ввода.*/

void task1() {
    double thrust;
    double mass;
    double time;

    cout << "Введите силу тяги (в ньютонах): ";
    cin >> thrust;

    cout << "Введите массу звездолета (в килограммах): ";
    cin >> mass;

    cout << "Введите время полёта (в секундах): ";
    cin >> time;

    // Проверка ввода
    if (thrust <= 0 || mass <= 0 || time <= 0) {
        std::cout << "Введите положительные числа." << endl;
    }
    double distance = (thrust * pow(time, 2)) / (2 * mass);
    cout << "Расстояние, на которое переместится звездолёт через " 
        << time << " секунд: " << distance << " метров" << std::endl;
}
