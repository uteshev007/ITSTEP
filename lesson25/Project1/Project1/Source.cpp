#include <iostream>
#define SIZE 10

using namespace std;

struct Student
{
	string fio;
	string adress;
	size_t age;
	size_t scholarshp;
	
	void PrintInfo()
	{
		cout << fio << ' ' << adress << ' ' << age << ' ' << scholarshp << endl;
	}

};

void DeleteStudent(Student* students, size_t& numberOfStudents)
{
	if (numberOfStudents == 0)
	{
		cout << "Group is empty. " << endl;
		system("pause");
		return;
	}

	for (int i = 0; i < numberOfStudents; i++)
	{
		cout << i + 1 << ' ';
		students[i].PrintInfo();
	}
	int n = 0;
	for (int i = n - 1; i < numberOfStudents - 1; i++)
	{
		swap(students[i], students[i + 1]);
	}
	cout << "Choose student who will be deleted: " << endl;
	cin >> n;
	students[n - 1] = Student{};
	numberOfStudents--;
		
}

void ChangeStudentsInfo(Student* students, size_t& numberOfStudents)
{
	if (numberOfStudents == 0)
	{
		cout << "Group is empty. " << endl;
		system("pause");
		return;
	}
	for (int i = 0; i < numberOfStudents; i++)
	{
		cout << i + 1 << ' ';
		students[i].PrintInfo();
	}
	int n = 0;
	int p = 0;
	cout << "Choose student who will be changed? " << endl;
	cin >> n;
	n--;
	if (n < 0 || n >= numberOfStudents)
	{
		cout << "Wrong number of student " << endl;
		system("pause");
		return;
	}
	cout << "What type of information do you want to change? " << endl;
	cout << "Enter a new info about a student " << endl;
	cin >> p;
	switch (p)
	{
	case 1: students[n].fio;
		break;
	case 2: students[n].adress;
		break;
	case 3: students[n].age;
		break;
	case 4: students[n].scholarshp;
		break;
	default:
		cout << "Wrong";
		break;
	}
}
void AddStudent(Student* students, size_t &numberOfStudents)
{
	if (numberOfStudents >= 10)
	{
		cout << "Group is full" << endl;
		system("pause");
		return;
	}
	Student newStudent;
	cout << "Enter Name and Surname of the new student: ";
	cin >> newStudent.fio;
	cout << "Enter the adress of the new student: ";
	cin >> newStudent.adress;
	cout << "Enter the age of the new student: ";
	cin >> newStudent.age;
	cout << "Enter the scholarship of the new student: ";
	cin >> newStudent.scholarshp;
	students[numberOfStudents] = newStudent;
	numberOfStudents++;
	system("pause");
}

void PrintStudent(Student* students, size_t& numberOfStudents)
{
	if (numberOfStudents < 1)
	{
		cout << "Group is empty. Add a new student" << endl;
		return;
	}
	cout << "List of students" << endl;
	
	for (int i = 0; i < numberOfStudents; i++)
	{
		cout << i + 1 << ' ';
		students[i].PrintInfo();
	}
}

int main()
{
	Student arr[SIZE];
	setlocale(0, "rus");
	size_t numberOfStudents = 0;
	while (true)
	{
		int number;
		system("cls");
		cout << "This is a programm for count a students" << endl;
		cout << "1. Add a student" << endl;
		cout << "2. Delete a student" << endl;
		cout << "3. Redact a student" << endl;
		cout << "4. Print information about a student" << endl;
		cout << "Enter page: ";
		cin >> number;
		switch (number)
		{
		case 1:
			AddStudent(arr, numberOfStudents);
			cout << "Method" << endl;
			cout << "1 part" << endl;
			system("pause");
			break;
		case 2:
			DeleteStudent(arr, numberOfStudents);
			system("pause");
			break;
		case 3:
			ChangeStudentsInfo(arr, numberOfStudents);
			break;
		case 4: 
			PrintStudent(arr, numberOfStudents);
			system("pause");
			break;
		default:
			cout << "Method" << endl;
			cout << "Wrong menu page: " << endl;
			system("pause");
			break;
		}

	}

	
	

	

}