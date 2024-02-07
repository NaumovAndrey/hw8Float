#include "pch.h"
#include "iostream"
#include "cmath"

using namespace std;


/**/

void task3() {
	float x, y, z;
	cout << "Введите размер бруска x, y, z" << endl;
	cin >> x >> y >> z;

	if (x < 5 || y < 5 || z < 5) {
		cout << "Из такого бруска не получитьсь сделать кубики";
	}

	int countCub = floor(x/5) * floor(y/5) * floor(z/5);
	int n = floor(cbrt(countCub));
	
	if (pow(n, n) < 8){
		cout << "Из такого бруска не получитьсь сделать набор кубиков" << floor(cbrt(countCub));
	}
	else {
		cout << "Из бруска размером " << x << " " << y << " " << z << " получиться сделать " << countCub
			<< " кубиков из них можно собрать набор из " << pow(n, n) << " кубиков";
	}
}
