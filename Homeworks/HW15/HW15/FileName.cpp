#include <iostream>
#include <chrono> // Для использования функции sleep
#include <thread> // Для использования функции sleep

void draw_horizontal_line(char symbol, int length, int speed) {
    for (int i = 0; i < length; i++) {
        std::cout << symbol;
        std::cout.flush(); // Для мгновенного вывода символа
        if (speed == 1) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Медленно
        }
        else if (speed == 2) {
            std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Нормально
        }
        else {
            std::this_thread::sleep_for(std::chrono::milliseconds(10)); // Быстро
        }
    }
    std::cout << std::endl;
}

void draw_vertical_line(char symbol, int length, int speed) {
    for (int i = 0; i < length; i++) {
        std::cout << symbol << std::endl;
        if (speed == 1) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Медленно
        }
        else if (speed == 2) {
            std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Нормально
        }
        else {
            std::this_thread::sleep_for(std::chrono::milliseconds(10)); // Быстро
        }
    }
}

int main() {
    setlocale(0, "RUS");

    int choice;
    char symbol;
    int length;
    int speed;

    std::cout << "Выберите тип линии:\n";
    std::cout << "1. Горизонтальная\n";
    std::cout << "2. Вертикальная\n";
    std::cin >> choice;

    std::cout << "Введите символ для линии: ";
    std::cin >> symbol;

    std::cout << "Введите длину линии: ";
    std::cin >> length;

    std::cout << "Выберите скорость вывода линии:\n";
    std::cout << "1. Медленно\n";
    std::cout << "2. Нормально\n";
    std::cout << "3. Быстро\n";
    std::cin >> speed;

    if (choice == 1) {
        draw_horizontal_line(symbol, length, speed);
    }
    else {
        draw_vertical_line(symbol, length, speed);
    }

    return 0;
}
