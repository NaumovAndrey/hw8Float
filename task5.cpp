#include "pch.h"
#include "iostream"
#include "cmath"
#include <iomanip>

using namespace std;


/**/

void task5() {
    int distance;
    int totalSeconds = 0;

    cout << "������, ���! ������� ���������� �� ������� ��������? ";
    cin >> distance;

    for (int i = 1; i <= distance; i++) {
        float pace;

        cout << "����� � ���� ��� ���� �� ��������� " << i << "? ";
        cin >> pace;

        totalSeconds += pace;
    }

    int average = totalSeconds / distance;
    int countMinutes = round(average / 60);
    int countSeconds = round(average - (countMinutes * 60));

    cout << "���� ������� ���� �� ����������: " << countMinutes << " ������ "
         << countSeconds << " ������." << endl;

}
