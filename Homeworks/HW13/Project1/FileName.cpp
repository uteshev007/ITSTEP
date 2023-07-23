#include <iostream>
using namespace std;


void PrintArr(char arr[], char size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

void PrintArr2(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}




int main() {
	setlocale(0, "RUS");

	/*
	27. *Одномерный массив из 20 символов заполнить 
	буквами английского алфавита (в алфавитном порядке) 
	*/

    const int SIZE = 20;
    char alphabet[SIZE];

    for (int i = 0; i < SIZE; i++) {
        alphabet[i] = 'a' + i;
    }
    PrintArr(alphabet, SIZE);

    /*
    21. **Напишите программу, которая суммирует элементы массива из 10 элементов по следующему принципу:
    первый суммирует с последним; второй - с предпоследним и т.д.
    Сумму сохранить в массиве из 5 элементов.
    Например,
    исходный массив[10]:      5 1 7 3 4 9 6 8 3 4
    результирующий массив[5]: 9 4 15 9 13  
    */

    int arr[] = { 5, 1 , 7 , 3 , 4 , 9 , 6 , 8 , 3 , 4 };
    int resarr[5];
    for (int i = 0; i < 5; i++)
    {
        resarr[i] = arr[i] + arr[9 - i];
    }
    PrintArr2(resarr, 5);





}