#include <iostream>
using namespace std;


/*
29.*Реализовать структуру "Книга" (название, автор, издательство, жанр, количество страниц, тираж, цена).
Создайте экземпляр структуры и проиллюстрируйте работу с ним.
*/

struct Book
{
	// eto tela struktury
	// V nem propisyvaem harakteristiki struktury
	// peremennye - atributy ili parametry
	// funkcii v strukture - metod;

	string name;
	string author;
	string publisher;
	string genre;
	size_t edition;
	double cost;

void PrintInfo()
{
	cout << name << ' ' << author << ' ' << publisher << ' ' << genre << ' ' << edition << ' ' << cost << endl;
}
};

/*
23. *Разработать структуру "Паспорт" (номер, серия, кем выдан).
Разработать структуру "Человек" (имя, фамилия, возраст, "Паспорт").
*/

struct passport
{
	int number;
	int serialNumber;
	string vydan;

	void PrintInfo()
	{
		cout << "Номер: " << number << ' ' << "Серия: " << serialNumber << ' ' << "Выдан: " << vydan << ' ' << endl;
	}
};

struct User
{
	string name;
	string surname;
	size_t age;
	passport passport;

	void PrintInfo()
	{
		cout << "ИМЯ: "  << name << endl << "ФАМИЛИЯ : " << surname << endl  << "ВОЗРАСТ: " << age << endl;
		cout << "Passport: " << endl;
		passport.PrintInfo();
	}


};

/*
20. **Разработайте структуру "Квартира" (номер квартиры, кол-во комнат, общая площадь).
Разработайте структуру "Дом" (номер дома, кол-во квартир, массив квартир).
Создайте экземпляр структуры и реализуйте для него следующие функции:
- Печать всех квартир;
- Добавление квартиры;
- Удаление квартиры;
Примечание: массив квартир можно сделать статическим.
*/

struct Appart
{
	int number;
	int numberOfRooms;
	int area;

	void PrintInfo()
	{
		cout << number << ' ' << numberOfRooms << ' ' << area << endl;

	}

};

struct House
{
	int number;
	int numberOfApparts;
	Appart *aparts = new Appart[numberOfApparts];
	int currentNumberOfApparts;

	void PrintInfo()
	{
		cout << number << ' ' << numberOfApparts << endl;
		PrintApparts();
	}

	void PrintApparts()
	{
		for (int i = 0; i < numberOfApparts; i++)
		{
			aparts[i].PrintInfo();
		}
	}

	void AddAppart (Appart appart) 
	{
		if (currentNumberOfApparts < numberOfApparts)
		{
			aparts[currentNumberOfApparts] = appart;
			currentNumberOfApparts++;
		}
		else
		{
			cout << "Дом заполнен" << endl;
		}
	}

	void DeleteAppart()
	{
		if (currentNumberOfApparts > 0)
		{
			currentNumberOfApparts--;
			aparts[currentNumberOfApparts] = Appart{};
		}
		else
		{
			cout << "Нечего удалять" << endl;
		}
	}
};


/*
12.*Создать структуру, описывающую прямоугольник.
Написать функции-методы для работы с этой структурой:
-перемещение прямоугольника,
-изменение размера прямоугольника,
вывод прямоугольника в заданную позицию экрана.
*/

struct Cube
{
	int width;
	int height;

	void Print(int width, int height)
	{
		for (int i = 0; i < width; i++)
		{
			cout << "*";
			i++;

			for (int j = 0; j < height; j++)
			{
				cout << "*";
				j++;
			}
		}
		cout << endl;

	}

};



int main()
{
	setlocale(0, "RUS");
	//Book A{ "name", "author", "publisher", "genre", 100, 1000 };
	//A.author = "Book"; // dostup k peremennym cherez tochku
	//A.PrintInfo();
	//passport JohnP{ 12345, 221246, "MVD" };
	//JohnP.PrintInfo();
	//User John{ "John", "Doe", 29, JohnP};
	//John.PrintInfo();


	//Appart A{6, 1, 25};
	//Appart* arr = new Appart[3];
	//arr[0] = A;
	//arr[1] = Appart{12, 15, 44};
	//arr[2]; /*= Appart{21, 4, 84};*/
	//House house{ 23, 3, arr };
	//house.AddAppart(Appart{ 65,3,58 });
	//house.DeleteAppart();
	//house.PrintInfo();


	Cube A{ 5, 10 };
	A.Print(5, 10);

}