#include "pch.h"
#include "iostream"

using namespace std;


/**/

void task2() {
    float health = 1.0;
    float resistance = 1.0;
    float power;

    cout << "������� ���������� �������� ���� (�� 0 �� 1): ";
    cin >> health;

    cout << "������� ���������������� ����� ���� (�� 0 �� 1): ";
    cin >> resistance;

    if (health < 0 || health > 1 || resistance < 0 || resistance > 1) {
        cout << "������ �����! ������� �������� �� 0 �� 1." << endl;
    }

    while (health > 0) {
        cout << "������� �������� ��������� ���� (�� 0 �� 1): ";
        cin >> power;

        if (power < 0 || power > 1) {
            cout << "������ �����! ������� �������� �� 0 �� 1." << endl;
            continue;
        }

        double damage = power * (1 - resistance);
        health -= damage;

        cout << "���� �� �����: " << fixed << damage << endl;
        cout << "���� �������� ����: " << fixed << health << endl;
    }
    cout << "������ ��� �����!" << endl;
}
