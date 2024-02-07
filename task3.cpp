#include "pch.h"
#include "iostream"
#include "cmath"

using namespace std;


/**/

void task3() {
	float x, y, z;
	cout << "������� ������ ������ x, y, z" << endl;
	cin >> x >> y >> z;

	if (x < 5 || y < 5 || z < 5) {
		cout << "�� ������ ������ �� ���������� ������� ������";
	}

	int countCub = floor(x/5) * floor(y/5) * floor(z/5);
	int n = floor(cbrt(countCub));
	
	if (pow(n, n) < 8){
		cout << "�� ������ ������ �� ���������� ������� ����� �������" << floor(cbrt(countCub));
	}
	else {
		cout << "�� ������ �������� " << x << " " << y << " " << z << " ���������� ������� " << countCub
			<< " ������� �� ��� ����� ������� ����� �� " << pow(n, n) << " �������";
	}
}
