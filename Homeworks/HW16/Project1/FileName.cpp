
/*

1. **Необходимо отсортировать первые две трети массива в порядке возрастания, 
если среднее арифметическое всех элементов больше нуля; иначе - лишь первую треть.
Остальную часть массива не сортировать а расположить в обратном порядке.
*/

#include <iostream>

int main() {
    const int N = 9; // Количество элементов в массиве
    int arr[N] = { 5, -3, 2, 8, -7, 1, 0, 4, 9 }; // Исходный массив

    // Вычисляем среднее арифметическое
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    double avg = static_cast<double>(sum) / N;

    int end_index = avg > 0 ? N * 2 / 3 : N / 3; // Конечный индекс для сортировки

    // Сортировка первых двух третей массива методом пузырька
    for (int i = 0; i < end_index - 1; i++) {
        for (int j = 0; j < end_index - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Располагаем оставшуюся часть массива в обратном порядке
    int start_index = avg > 0 ? end_index : 0;
    int mid_index = N - end_index;
    for (int i = 0; i < mid_index / 2; i++) {
        std::swap(arr[start_index + i], arr[N - 1 - i]);
    }

    // Выводим отсортированный массив на экран
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
