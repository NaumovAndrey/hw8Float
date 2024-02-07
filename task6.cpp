#include "pch.h"
#include "iostream"

using namespace std;


/**/

void task6() {
    float initialAmplitude, finalAmplitude;
    int swings = 0;

    cout << "Укажите начальную амплитуду колебания маятника (в см): ";
    cin >> initialAmplitude;

    cout << "Укажите конечную амплитуду колебаний, при которой маятник считается остановившимся (в см): ";
    cin >> finalAmplitude;


    while (initialAmplitude > finalAmplitude) {
        initialAmplitude *= 0.916;  // Уменьшаем амплитуду на 8,4%
        swings++;
    }

    cout << "Маятник останавливается после " << swings << " качаний.\n";
}
