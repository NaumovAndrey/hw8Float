#include "pch.h"
#include "iostream"

using namespace std;


/**/

void task6() {
    float initialAmplitude, finalAmplitude;
    int swings = 0;

    cout << "������� ��������� ��������� ��������� �������� (� ��): ";
    cin >> initialAmplitude;

    cout << "������� �������� ��������� ���������, ��� ������� ������� ��������� �������������� (� ��): ";
    cin >> finalAmplitude;


    while (initialAmplitude > finalAmplitude) {
        initialAmplitude *= 0.916;  // ��������� ��������� �� 8,4%
        swings++;
    }

    cout << "������� ��������������� ����� " << swings << " �������.\n";
}
