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
	//int arr1[SIZE] = { 1, 2, 3, 4, 5 };
	//int arr2[SIZE] = { 1, 2, 3, 4, 5 };
	//int arr3[SIZE];

	//for (int i = 0; i < SIZE; i++)
	//{
	//	arr3[i] = arr1[i] + arr2[i];
	//	cout << arr3[i] << ' ';

	//}

/*
17. *�������� ���������, ���������� ��������������� �������� 2-� ��������
�������� 5 ��������� ������ � ���� ������ �������� 10 ���������.
*/
//	int arr1[SIZE] = { 1, 2, 3, 4, 5 };
//	int arr2[SIZE] = { 1, 2, 3, 4, 5 };
//	int arr3[10];
//
//	int count = 0;
//
//	for (int i = 0; i < SIZE; i++, count++)
//	{
//		arr3[count] = arr1[i];
//	}
//
//	for (int i = 0; i < SIZE; i++, count++)
//	{
//		arr3[count] = arr2[i];
//	}
//// ������ for each
//	for (int i : arr3)
//	{
//		cout << i << ' ';
//	}

/*
14. **�������� ���������, ���������� �������� 2-� �������� �������� 5
��������� ������ � ���� ������ �������� 10 ��������� ��������� �������:
������� ���������� ��������������� ��� ��������, ������� 0, �����
��������������� ��� ��������, ������ 0, � ����� ��������������� ��� ��������,
������� 0.
*/
	//int arr1[SIZE] = { 1, 0, 3, -4, 5 };
	//int arr2[SIZE] = { -2, 4, -3, 2, 0 };
	//int arr3[10] = { 0 };
	//int count = 0;
	//// ������ ����
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr1[i] > 0)
	//	{
	//		arr3[count] = arr1[i];
	//		count++;
	//	}

	//}
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr2[i] > 0)
	//	{
	//		arr3[count] = arr2[i];
	//		count++;
	//	}
	//}

	//// ����� 0

	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr1[i] == 0)
	//	{
	//		arr3[count] = arr1[i];
	//		count++;
	//	}

	//}
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr2[i] == 0)
	//	{
	//		arr3[count] = arr2[i];
	//		count++;
	//	}
	//}
	//// ������ 0

	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr1[i] < 0)
	//	{
	//		arr3[count] = arr1[i];
	//		count++;
	//	}

	//}
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr2[i] < 0)
	//	{
	//		arr3[count] = arr2[i];
	//		count++;
	//	}
	//}


	//	for (int i : arr3)
	//{
	//	cout << i << ' ';
	//}



 /*
 21. **�������� ���������, ������� ��������� �������� ������� �� 10 ��������� �� 
���������� ��������: ������ ��������� � ���������; ������ � � ������������� 
� �.�. � ������� ����� � ������ �� 5 ���������. 
 */

	//int arr1[SIZE * 2] = { 1,2,3,4,5,6,7,8,9,10 };
	//int summ[SIZE] = { 0 };

	//int left = 0;
	//int right = (SIZE * 2) - 1;

	//for (int i = 0; i < SIZE * 2; i++)
	//{
	//	arr1[i] = i + 1;
	//}
	//cout << endl;

	//for (int i = 0; i < SIZE; i++)
	//{
	//	summ[i] = arr1[left] + arr1[right];
	//	left++;
	//	right--;
	//}




	//for (int i : arr1)
	//{
	//cout << i << ' ';
	//}
	//cout << endl;
	//for (int i : summ)
	//{
	//	cout << i << ' ';
	//}


/*
1.�������� ���������, ������� ������ � ���������� ���������� ������ �� 5 ����� �����, �����
���� ������� ���������� ��������� ���������. ����� ������ ������� �������� ������
���������� ��������� � ������� ��������.
���� ������� ����� �����.
����� ����� ������� ����� ������� <Enter>
�[1] - > 12
�[2] - > 0
�[3] - > 3
�[4] - > -1
�[5] - > 0
� �������
3 ��������� ��������.
*/
	
	//const int size = 5;
	//int arr[size] = { 0 };
	//int count = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	cout << "a[" << i << "] = ";
	//	cin >> arr[i];
	//
	//}

	//for (int i : arr)
	//{
	//	if (i != 0)
	//	{
	//		count++;
	//	}
	//}

	//cout << "� �������" << endl << count << " ��������� ��������";



/*
����� ������������ �������� �������.
������� � ����� ������ �������� ������� (5 ����� �����) � ������� <Enter>
-> 23 0 45 -5 12
����������� ������� �������: -5

*/

	/*const int size = 5;
	int arr[size] = { 0 };
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];

	}

	int min = arr[0];
	for (int i : arr)
	{
		if (i < min)
		{
			min = i;
			
		}
	}
		cout << "����������� ������� �������: " << min;*/

/*
3. �������� ���������, ������� ��������� ������� �������������� ��������� ���������
���������� � ���������� ������� ����� �����. ���� �������� ������������� ��� ������ ��
����� ������ ���������.
������� �������� ������� (10 ����� �����) � ����� ������ � ������� <Enter>.
-> 23 0 45 -5 12 0 -2 30 0 64
����� ��������� �������: 184
*/
	//const int size = 10;
	//int arr[size] = { 0 };
	//int summ = 0;

	//for (int i = 0; i < size; i++)
	//{
	//	cin >> arr[i];
	//}

	//for (int i : arr)
	//{
	//	summ += i;
	//}
	//cout << summ;



/*
4. �������� ���������, ������� ��������� ������� �������������� ��������� ������� ��� �����
������������ � ������������� ��������� �������. ���� �������� ������������� ��� ������
�� ����� ������ ���������.
������� �������������� ��� ����� min � max ��������.
������� ������ (10 ����� ����� � ����� ������) ->12 10 5 7 15 4 10 17 23 7 �����������
�������: 4 ������������ �������: 23 ������� �����. ��� ����� min � max ��������: 10.36*/

	const int size = 10;
	int arr[size] = { 12,10,5,7,15,4,10,17,23,7 };
	int summ = 0;
	float count = size - 2;
	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max);
			max = arr[i];
		if (arr[i] < min);
			min = arr[i];
	}

	for (int i : arr)
	{
		if (i == max || i == min)
		{
			continue;
		}
		summ += i;

	}
		cout << summ/count;






}




