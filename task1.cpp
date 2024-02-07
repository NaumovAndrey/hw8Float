#include "pch.h"
#include "iostream"
#include "cmath"

using namespace std;


/*�������� ���������, ������� �� �������� F, m � t �������, �� ����� ���������� �� ��������������� ��������� �������� ����������� ������� ����� t ������. 
���������� �������� �����.*/

void task1() {
    double thrust;
    double mass;
    double time;

    cout << "������� ���� ���� (� ��������): ";
    cin >> thrust;

    cout << "������� ����� ���������� (� �����������): ";
    cin >> mass;

    cout << "������� ����� ����� (� ��������): ";
    cin >> time;

    // �������� �����
    if (thrust <= 0 || mass <= 0 || time <= 0) {
        std::cout << "������� ������������� �����." << endl;
    }
    double distance = (thrust * pow(time, 2)) / (2 * mass);
    cout << "����������, �� ������� ������������ �������� ����� " 
        << time << " ������: " << distance << " ������" << std::endl;
}
