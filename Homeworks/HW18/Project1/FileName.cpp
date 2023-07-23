/*
Написать функцию, возвращающие максимальное значение из двух, трех и четырех значений.
*реализовать перегруженные варианты функции (для типов int, long long, float, double);

int Max(int a, int b) {
  if(a > b){ return a; }
  else { return b; }
}

int Max(int a, int b, int c){
  int temp = Max(a,b);
  int res = Max(temp, c);
  return res;
  return Max( Max(a, b), c );
}

int Max(int a, int b, int c, int d);

double Max(double a, double b);
double Max(double a, double b, double c);
double Max(double a, double b, double c, double d);

*/

#include <iostream>

using namespace std;

int Max(int a, int b) {
	return a > b ? a : b;
}

int Max(int a, int b, int c) {
	return Max(Max(a, b), c);
}

int Max(int a, int b, int c, int d) {
	return Max(Max(a, b), Max(c, d));
}

double Max(double a, double b) {
	return a > b ? a : b;
}

double Max(double a, double b, double c) {
	return Max(Max(a, b), c);
}

double Max(double a, double b, double c, double d) {
	return Max(Max(a, b), Max(c, d));
}

int main() {
	cout << Max(10, 20) << endl;                 // Output: 20
	cout << Max(10, 20, 30) << endl;             // Output: 30
	cout << Max(10, 20, 30, 40) << endl;         // Output: 40
	cout << Max(1.1, 2.2) << endl;               // Output: 2.2
	cout << Max(1.1, 2.2, 3.3) << endl;          // Output: 3.3
	cout << Max(1.1, 2.2, 3.3, 4.4) << endl;      // Output: 4.4
	return 0;
}
