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
	27. *���������� ������ �� 20 �������� ��������� 
	������� ����������� �������� (� ���������� �������) 
	*/

    const int SIZE = 20;
    char alphabet[SIZE];

    for (int i = 0; i < SIZE; i++) {
        alphabet[i] = 'a' + i;
    }
    PrintArr(alphabet, SIZE);

    /*
    21. **�������� ���������, ������� ��������� �������� ������� �� 10 ��������� �� ���������� ��������:
    ������ ��������� � ���������; ������ - � ������������� � �.�.
    ����� ��������� � ������� �� 5 ���������.
    ��������,
    �������� ������[10]:      5 1 7 3 4 9 6 8 3 4
    �������������� ������[5]: 9 4 15 9 13  
    */

    int arr[] = { 5, 1 , 7 , 3 , 4 , 9 , 6 , 8 , 3 , 4 };
    int resarr[5];
    for (int i = 0; i < 5; i++)
    {
        resarr[i] = arr[i] + arr[9 - i];
    }
    PrintArr2(resarr, 5);





}