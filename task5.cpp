#include "pch.h"
#include "iostream"
#include "cmath"
#include <iomanip>

using namespace std;


/**/

void task5() {
    int distance;
    int totalSeconds = 0;

    cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
    cin >> distance;

    for (int i = 1; i <= distance; i++) {
        float pace;

        cout << "Какой у тебя был темп на километре " << i << "? ";
        cin >> pace;

        totalSeconds += pace;
    }

    int average = totalSeconds / distance;
    int countMinutes = round(average / 60);
    int countSeconds = round(average - (countMinutes * 60));

    cout << "Твой средний темп за тренировку: " << countMinutes << " минуты "
         << countSeconds << " секунд." << endl;

}
