
/*

1. **���������� ������������� ������ ��� ����� ������� � ������� �����������, 
���� ������� �������������� ���� ��������� ������ ����; ����� - ���� ������ �����.
��������� ����� ������� �� ����������� � ����������� � �������� �������.
*/

#include <iostream>

int main() {
    const int N = 9; // ���������� ��������� � �������
    int arr[N] = { 5, -3, 2, 8, -7, 1, 0, 4, 9 }; // �������� ������

    // ��������� ������� ��������������
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    double avg = static_cast<double>(sum) / N;

    int end_index = avg > 0 ? N * 2 / 3 : N / 3; // �������� ������ ��� ����������

    // ���������� ������ ���� ������ ������� ������� ��������
    for (int i = 0; i < end_index - 1; i++) {
        for (int j = 0; j < end_index - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }

    // ����������� ���������� ����� ������� � �������� �������
    int start_index = avg > 0 ? end_index : 0;
    int mid_index = N - end_index;
    for (int i = 0; i < mid_index / 2; i++) {
        std::swap(arr[start_index + i], arr[N - 1 - i]);
    }

    // ������� ��������������� ������ �� �����
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
