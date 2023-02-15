#include <iostream>
using namespace std;

int NumberCountPercent(int number, double &outPercent)
{
	int countDigits = 0;
	int countEven = 0;
	while (number != 0)
	{
		if (number % 10 % 2 == 0)
			countEven++;
		number /= 10;
		countDigits++;
	}
	outPercent = countEven * 100.0 / countDigits;
	return countDigits;
}

void numbers(int n) {
	for (int i = 0; i <= n; i++)
	{
		cout << i << " ";
	}
}
 // * * * R E K U R C I Y A * * * 
void numbers2(int n) {
	if (n > 0)
	{
		numbers2(n - 1);
	}
		cout << n << " ";
}

void stars(int n) {
	if (n > 0)
	{
		stars(n - 1);
		cout << "*" << " ";
	}
}

void atob(int a, int b) {
	if (b > a)
	{
		atob(a, b - 1);
	}
	cout << a << " "; 

}

int MyPow(int base, int exp) {
	if (exp == 0)
		return 1;
	return base * MyPow(base, exp - 1);
}
	

	// * * * S H A B L O N Y * * * *
	// L I N E A R S E A R C H


template <typename T>

int LinearSearch(T arr[], int size, T value)
{

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
			return i;
	}
	return -1;
}

	// B I N A R Y S E A R C H
template <typename T>
int BinarySearch(T arr[], int size, T value)
{
	int low = 0, high = size - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == value)
		{
			return mid;
		}
		else if (arr[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
}

int main() {
	setlocale(0, "RUS");

	//double out;
	//int number = 123;
	//int count;

	//count = NumberCountPercent(number, out);
	//cout << count << " " << out << endl;

	//numbers(10);
	
	//numbers2(3);
	
	//stars(5);
	
	//atob(9, 3);
	
	//cout << MyPow(2, 8);








}