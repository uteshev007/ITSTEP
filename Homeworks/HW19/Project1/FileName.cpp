/*
Напишите функцию, которая принимает размеры прямоугольника и выводит на экран прямоугольник из звездочек.
*/
#include <iostream>

using namespace std;

void PrintRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Напишите функцию, которая определяет количество элементов передаваемого
массива, которые больше определенного числа, это число тоже передается в
функцию.
*/

int CountGreater(int arr[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > num) {
            count++;
        }
    }
    return count;
}



int main() {
    int width, height;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    PrintRectangle(width, height);
    return 0;



    /*
    Напишите функцию, которая определяет количество элементов передаваемого
    массива, которые больше определенного числа, это число тоже передается в
    функцию.
    */
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 5;
    int count = CountGreater(arr, size, num);
    cout << "The number of elements greater than " << num << " is " << count << endl;
    return 0;


}
