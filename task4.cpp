#include "pch.h"
#include "iostream"

using namespace std;


/**/

void task4() {
    int fileSize, downloadSpeed, downloaded = 0, seconds = 0;

    cout << "Укажите размер файла для скачивания (в МБ): ";
    cin >> fileSize;

    cout << "Какова скорость вашего соединения (в МБ/с): ";
    cin >> downloadSpeed;

    while (downloaded < fileSize) {
        downloaded += downloadSpeed;
        seconds++;

        if (downloaded > fileSize) {
            downloaded = fileSize;
        }

        int progress = (downloaded * 100) / fileSize;

        cout << "Прошло " << seconds << " сек. Скачано " << downloaded << " из " << fileSize << " МБ (" << progress << "%).\n";
    }

    cout << "Файл успешно загружен! Загрузка заняла " << seconds << " сек.\n";
}
