#include "pch.h"
#include "iostream"

using namespace std;


/**/

void task4() {
    int fileSize, downloadSpeed, downloaded = 0, seconds = 0;

    cout << "������� ������ ����� ��� ���������� (� ��): ";
    cin >> fileSize;

    cout << "������ �������� ������ ���������� (� ��/�): ";
    cin >> downloadSpeed;

    while (downloaded < fileSize) {
        downloaded += downloadSpeed;
        seconds++;

        if (downloaded > fileSize) {
            downloaded = fileSize;
        }

        int progress = (downloaded * 100) / fileSize;

        cout << "������ " << seconds << " ���. ������� " << downloaded << " �� " << fileSize << " �� (" << progress << "%).\n";
    }

    cout << "���� ������� ��������! �������� ������ " << seconds << " ���.\n";
}
