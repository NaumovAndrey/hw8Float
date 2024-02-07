#include "pch.h"
#include "iostream"
#include <conio.h>
#include <clocale>
#include "iostream"

using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();

int main() {
    setlocale(LC_ALL, "Rus");

    cout << "Домашняя работа к третьей лекции. Двумерные массивы и алгоритмы над ними" << endl;


    while (true)
    {
        cout << "1: Космический симулятор." << endl;
        cout << "2: Immolate Improved!" << endl;
        cout << "3: Игрушечная история." << endl;
        cout << "4: Убийца Steam." << endl;
        cout << "5: Кенийский бегун." << endl;
        cout << "6: Маятник." << endl;
        cout << "Введите число от 1 до 6 или что-то другое для выхода: ";

        int task;
        cin >> task;

        if (task == 1) {
            system("cls");
            cout << "Задача 1 Космический симулятор." << endl;
            task1();
            _getch();
            system("cls");
        }

        else if (task == 2) {
            system("cls");
            cout << "Задача 2 Immolate Improved!" << endl;
            task2();
            _getch();
            system("cls");;
        }

        else if (task == 3) {
            system("cls");
            cout << "Задача 3 Игрушечная история." << endl;
            task3();
            _getch();
            system("cls");
        }

        else if (task == 4) {
            system("cls");
            cout << "Задача 4 Убийца Steam." << endl;
            task2();
            _getch();
            system("cls");;
        }

        else if (task == 5) {
            system("cls");
            cout << "Задача 5 Кенийский бегун." << endl;
            task3();
            _getch();
            system("cls");
        }

        else if (task == 6) {
            system("cls");
            cout << "Задача 6 Маятник." << endl;
            task3();
            _getch();
            system("cls");
        }

        else
        {
            system("cls");
            cout << "некорректный ввод. Выход из программы";
            break;
        }
    }

}
