#include <iostream>
using namespace std;
#define SIZE 5

// ������ ( Array )

//int main() {
//	const int size = 10;
//	// ���_������ ���_�������[���������� ����������]
//	int arr[size]; 
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//
//  }




int main() {
	setlocale(LC_ALL, "RUS");
/*
1. *��������, ���������, ������� ��������� ������� ����� �� 6 �������.
������������ ������ ������� ����� �� ������ �����.
*/

	//const int size = 6;
	//int arr[size];
	//int result = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	result += arr[i];
	//}
	//	cout << result;

/*
2. *�������� ���������, ������� ������� ���������� ������ � �������� �������
*/
	//const int size = 6;
	//int arr[size];
	//for (int i = 0; i < size; i++)
	//{
	//	cin >> arr[i];
	//}

	//for (int i = size -1; i > -1; i--) 
	//{
	//	cout << arr[i] << ' ';
	//}

/*
3. *������������ ������ ����� ������ �������������, ������ ������� ���������� �
������, ���������� ��������� �������� ������������� (�������� - ����� ���� ������).
*/
	//const int side = 5;
	//int p = 0;
	//int arr[side];
	//for (int i = 0; i < side; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < side; i++)
	//{
	//	p += arr[i];
	//}
	//	cout << p;

// 5. *� ���������� �������, ����������� ���������� �������, ���������� ����������� � ������������ ��������
	//const int size = 5;
	//int arr[size];
	//srand(time(0));
	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = rand() % 100;
	//	cout << arr[i] << ' ';
	//}

	//int max = INT_MIN;
	//int min = INT_MAX;

	//for (int i = 0; i < size; i++)
	//{
	//	if (arr[i] < min)
	//		min = arr[i];
	//	if (arr[i] > max)
	//		max = arr[i];
	//}
	//cout << endl << "max = " << max << endl;
	//cout << "min = " << min << endl;

/*
6. **������������ ������ ������� ����� �� ��� (12 �������).
����� ������������ ������ �������� (��������, 3 � 6 - ����� ����� 3-� � 6-� �������).
���������� ���������� �����, � ������� ������� ���� ����������� � �����,
� ������� ������� ���� ���������� � ������ ���������� ���������.

*/
	//const int month = 12;
	//int arr[month];
	//int range1, range2;
	//int max = INT_MIN;
	//int min = INT_MAX;
	//cout << "������� ������� �� 12 ���: ";
	//for (int i = 0; i < month; i++)
	//{
	//	cin >> arr[i];
	//}
	//cout << "������� ��������: ";
	//cin >> range1 >> range2;
	//for (int i = range1 - 1; i < range2; i++)
	//{
	//	if (arr[i] < min)
	//		min = arr[i];
	//	if (arr[i] > max)
	//		max = arr[i];
	//}
	//	
	//cout << endl << "max = " << max << endl;
	//cout << "min = " << min << endl;
	
/*
19. *�������� ���������, ������� ��������� ������������ ����� ���� �������� �
��������� ������� � ������ ������.
*/
	int arr1[SIZE] = { 1, 2, 3, 4, 5 };
	int arr2[SIZE] = { 1, 2, 3, 4, 5 };
	int arr3[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		cout << arr3[i] << ' ';

	}





}




