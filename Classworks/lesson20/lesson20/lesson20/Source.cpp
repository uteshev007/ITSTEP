#include <iostream>
#include <string.h>
using namespace std;


// * * * S T R O K I * * *


// Funkciya schitaet kolichestvo simvolov

int myStrlen(char *str)
{
	int result = 0;
	for (int i = 0; i < str[i] != '\0'; i++)
	{
		result++;
	}
	return result;
}

// 2 // funkciya zamena tochek

 void dotReplace(char* str)
 {
	 for (int i = 0; i < str[i] != '\0'; i++)
		 if (str[i] == '.')
			 str[i] = '!';
	
 }

 // 3

 void questionReplace(char* str)
 {
	 for (int i = 0; i < str[i] != '\0'; i++)
	 {
		 if (str[i] == '?')
			 str[i] = '1';
	 }

 }

 // 4 
 
 int symCounter(char* str)
 {
	 int result = 0;
	 for (int i = 0; i < str[i] != '\0'; i++)
	 {
		 if (str[i] == '%')
			 result++;
	 }
	 return result;
 }

 int symCounter5(char* str, char c)
 {
	 int result = 0;
	 for (int i = 0; i < str[i] != '\0'; i++)
	 {
		 if (str[i] == c)
			 result++;
	 }
	 return result;
 }

 // 6

 int mystrcmp(char* str1, char* str2)
 {
	 int i = 0;
	 while (str1[i] != '\0')
	 {
		 if (str1[i] != str2[i])
			 return (str1[i] > str2[i]) ? 1 : -1;
		 i++;
	 }
	 return (str1[i] == str2[i]) ? 0 : -1;;
 }

 void mytolower(char* str)
 {
	 for (int i = 0; str[i] != '\0'; i++)
	 {
		 if (str[i] >= 'A' && str[i] <= 'Z')
		 {
			 str[i] += ' ';
		 }
	 }
 }

 void mytoupper(char* str)
 {
	 for (int i = 0; str[i] != '\0'; i++)
	 {
		 if (str[i] >= 'a' && str[i] <= 'z')
		 {
			 str[i] -= ' ';
		 }
	 }
 }

 bool myisdigit(char c)
 {
	 return c >= '0' && c <= '9';
 }

 bool myisalpha(char c)
 {
	 return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z';
 }

// 6

 int wordCounter(char* str)
 {
	 int i = 0;
	 int result = 1;
	 for (; str[i] == ' '; i++)
		 ;
	 int len = myStrlen(str);
	 for (int j = len - 1; str[j] == ' '; j--)
		 if (str[j - 1] != ' ')
			 str[j] = '\0';
	 for (; str[i] != '\0'; i++)
	 {
		 if (str[i] == ' ' && str[i + 1] != ' ')
			 result++;
	 }
	 return result;
 }

 char* mystrcat(char* str1, const char* str2)
 {
	 int i = myStrlen(str1);
	 for (int j = 0; str2[j] != '\0'; j++)
	 {
		 str1[i] = str2[j];
			 i++;
	 }
	 str1[i] = '\0';
	 return str1;
 }


 void mystrcpy(char* str1, const char* str2)
 {
	 int i = 0;
	 for (; str2[i] != '\0'; i++)
	 {
		 str1[i] = str2[i];
			 str1[i] = '\0';
	 }
 }

int main()
{
	setlocale(0, "RUS");
	/*
	
	char str1[] = "Hello";			// inicializacia
	char* str2 = new char[100];
	cin.getline(str2, 100);			// Vvod stroki cin
	cout << myStrlen(str2);

	*/


	// 2. *Написать программу, которая заменяет все символы точки «.» в строке, 
	// введенной пользователем, на символы восклицательного знака «!».
	/*

	char str[] = "a.a.a.a.";
	dotReplace(str);
	cout << str;

	*/

	// 3. *Написать программу, которая заменяет все символы вопросительного знака «?» в строке, 
	// введенной пользователем, на символы «1».

	/*
	
	char str[] = "WTF?? BRO??";
	questionReplace(str);
	cout << str;

	*/

	// 4. * Пользователь вводит строку, посчитать, сколько в ней символов «%».

	/*
	
	char str[] = "This is *%!*%%, son of a %*!*%%";
	cout << symCounter(str);

	*/

	// 5. *Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается в строке.
	
	/*
	
	char* str = new char[100];
	char* c = new char[100];
	cin.getline(str, 100);
	cin.getline(c, 100);
	cout << symCounter5(str, *c);
		
	*/

	// 6

	/*
	
	char str1[] = "abc";
	char str2[] = "abcdff";
	cout << strcmp(str1, str2) << endl;
	cout << mystrcmp(str1, str2) << endl;

	*/

	// tolower // toupper
	// "aBsDE" // "aBsDE"
	// "absde" // "ABSDE"

	// string.h ----> BAN/Cheat

	//bool isdigit(char c) ---> esli char - cifra, to pravda
	//bool isalpha(char c) ---> esli char - bukva, to pravda

	// tolower // toupper
	/*
	
	char str1[] = "abcdf";
	char str2[] = "AbSDffQ";
	mytolower(str2);
	mytoupper(str1);
	cout << str1 << endl;
	cout << str2 << endl;

	*/


	// 6. Подсчитать количество слов во введенном предложении.
	// a)* между словами находится только 1 пробел
	// b)** пробелы также могут располагаться вначале и в конце предложения.
	// c)*** пробелы могут располагаться вначале и в конце предложения, и между словами может быть более 1 пробела.

	/*
	
	char str1[] = "Never gonna give you up!";
	cout << wordCounter(str1);

	*/

	char* str1 = new char[250];
	char* str2 = new char[100];
	mystrcpy(str2, "Hello ");
	cin.getline(str1, 250);
	mystrcat(str2, str1);
	cout << str2;
	delete[] str1;

	















}