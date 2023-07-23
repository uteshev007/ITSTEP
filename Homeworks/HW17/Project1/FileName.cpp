/*
Написать программу, которая заполняет массив 5х5 случайными числами в диапазоне от a до b.
Значения a и b вводит пользователь.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(0, "RUS");
    int a, b;
    int arr[5][5];

    // Получаем значения a и b от пользователя
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;

    // Задаем "зерно" для генератора случайных чисел
    srand(time(nullptr));

    // Заполняем массив случайными числами в диапазоне от a до b
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = rand() % (b - a + 1) + a;
        }
    }

    // Выводим массив на экран
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
