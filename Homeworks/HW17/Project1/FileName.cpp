/*
�������� ���������, ������� ��������� ������ 5�5 ���������� ������� � ��������� �� a �� b.
�������� a � b ������ ������������.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(0, "RUS");
    int a, b;
    int arr[5][5];

    // �������� �������� a � b �� ������������
    cout << "������� �������� a: ";
    cin >> a;
    cout << "������� �������� b: ";
    cin >> b;

    // ������ "�����" ��� ���������� ��������� �����
    srand(time(nullptr));

    // ��������� ������ ���������� ������� � ��������� �� a �� b
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = rand() % (b - a + 1) + a;
        }
    }

    // ������� ������ �� �����
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
