#include <iostream>
#include <chrono> // ��� ������������� ������� sleep
#include <thread> // ��� ������������� ������� sleep

void draw_horizontal_line(char symbol, int length, int speed) {
    for (int i = 0; i < length; i++) {
        std::cout << symbol;
        std::cout.flush(); // ��� ����������� ������ �������
        if (speed == 1) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100)); // ��������
        }
        else if (speed == 2) {
            std::this_thread::sleep_for(std::chrono::milliseconds(50)); // ���������
        }
        else {
            std::this_thread::sleep_for(std::chrono::milliseconds(10)); // ������
        }
    }
    std::cout << std::endl;
}

void draw_vertical_line(char symbol, int length, int speed) {
    for (int i = 0; i < length; i++) {
        std::cout << symbol << std::endl;
        if (speed == 1) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100)); // ��������
        }
        else if (speed == 2) {
            std::this_thread::sleep_for(std::chrono::milliseconds(50)); // ���������
        }
        else {
            std::this_thread::sleep_for(std::chrono::milliseconds(10)); // ������
        }
    }
}

int main() {
    setlocale(0, "RUS");

    int choice;
    char symbol;
    int length;
    int speed;

    std::cout << "�������� ��� �����:\n";
    std::cout << "1. ��������������\n";
    std::cout << "2. ������������\n";
    std::cin >> choice;

    std::cout << "������� ������ ��� �����: ";
    std::cin >> symbol;

    std::cout << "������� ����� �����: ";
    std::cin >> length;

    std::cout << "�������� �������� ������ �����:\n";
    std::cout << "1. ��������\n";
    std::cout << "2. ���������\n";
    std::cout << "3. ������\n";
    std::cin >> speed;

    if (choice == 1) {
        draw_horizontal_line(symbol, length, speed);
    }
    else {
        draw_vertical_line(symbol, length, speed);
    }

    return 0;
}
