#include <iostream>
using namespace std;
int main() {
setlocale(LC_ALL, "RUS");
//17)* ???????????? ?????? ? ?????????? ?????.??????? ?? ????? ??? ????? ? ????????, ???? ? ? 4? ???????.

	
	long a;
	cout << "??????? ????? ";
	cin >> a;
	cout << "???? ????? ? ???? ????? = " << a * a * a << ", ? ? ????????? ??????? ????? = " << a * a * a * a;
	cout << "\n";
	cout << "\n";
	cout << "\n";

//5)*** ???????????? ?????? ? ?????????? ??????????, ?????? ??????? ?? 100 ?? ? ????????? ???? ????? ???????.
/*	a) ??????? ?? ????? ????????????? ??????? ?? ?????????? ??????? ?? ?????? ????? ???????.*/

	int S;										 // ??????????
	double R;									 // ?????? ???????
	int C, C1, C2;								 // ????????? ???? ????? ???????
	int V;										 // ????? ????????
	
	cout << "??????? ??????????: ";
	cin >> S; 
	cout << "??? ?????? ??????? ?? 100??: ";
	cin >> R;
	cout << "????????? ??-92: ";
	cin >> C;
	cout << "????????? ??-95: ";
	cin >> C1;
	cout << "????????? ??-100: ";
	cin >> C2;






	// ??????? ? ???????? ?? ??????? ???? ???????
	cout << "\n";
	cout << (char)177 << (char)150 << (char)150 << (char)150 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173;
	cout << (char)177 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173;
	cout << (char)177;
	cout << "\n" << (char)166 << "     ??????	  " << (char)166;
	cout << "\n" << (char)177 <<(char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout <<(char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << "\n" << (char)166 << "??-92	 " << (char)166 << (R * C) / 100 * S << "	  " << (char)166;
	cout << "\n" << (char)177 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << "\n" << (char)166 << "??-95	 " << (char)166 << (R * C1) / 100 * S << "	  " << (char)166;
	cout << "\n" << (char)177 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << "\n" << (char)166 << "??-100  " << (char)166 << (R * C2) / 100 * S << "	  " << (char)166;
	cout << "\n";
	cout << (char)177 << (char)150 << (char)150 << (char)150 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173;
	cout << (char)177 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173;
	cout << (char)177;

	cout << "\n";
	cout << "\n";

	//b) ?????????, ??? ?????? ?? ????? ?? ?????? ???????.
	//??? ????? ???????????? ?????? ?????, ?? ??????? ?? ?????????? ???????? ??????.*/

	cout << "??????? ????? ????????: ";
	cin >> V;

	cout << "\n";
	cout << (char)177 << (char)150 << (char)150 << (char)150 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173;
	cout << (char)177 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173;
	cout << (char)177;
	cout << "\n" << (char)166 << "?? ???????? ??   " << (char)166;
	cout << "\n" << (char)177 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << "\n" << (char)166 << "??-92	 " << (char)166 << V / ((R * C) / 100 * S) * 100 << " " << (char)166;
	cout << "\n" << (char)177 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << "\n" << (char)166 << "??-95	 " << (char)166 << V / ((R * C1) / 100 * S) * 100 << " " << (char)166;
	cout << "\n" << (char)177 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)150 << (char)177;
	cout << "\n" << (char)166 << "??-100  " << (char)166 << V / ((R * C2) / 100 * S) * 100 << " " << (char)166;
	cout << "\n";
	cout << (char)177 << (char)150 << (char)150 << (char)150 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173;
	cout << (char)177 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173 << (char)173;
	cout << (char)177;
	cout << "\n";
	cout << "\n";
	cout << "\n";


//13) **???????? ????????? ? 100$ + 5% ?? ??????. ???????????? ?????? ? ?????????? ????? ????? ?????? ????????? ?? ?????.
//????????? ???????? ???????? ?????????.

int bonus;
int salary = 100;
cout << "??????? ????? ?????? ?? ???: ";
cin >> bonus;
cout << "???? ????????? ? ???? ??????: " << salary + (bonus * 0.05);
cout << "\n";
cout << "\n";

//14)** ???????????? ?????? ? ?????????? ????? ?????? ?????? ? ?????????? ? ?????? ????? ??????? ? ??????????.
//?????????, ??????? ?????? ??????????? ???? ???????? ??? ???????? ?????? ?? ????? ? ???? ?????.


int film;
int disk;
cout << "??????? ????? ?????? ? ??: ";
cin >> film;
cout << "??????? ????? 1 ????? ? ??: ";
cin >> disk;
cout << "??? ????? " << (film * 1024) / disk << " ?????, ????? ????????? ???? ?????";
cout << "\n";
cout << "\n";


//15) ***???????????? ?????? ? ?????????? ?????? ?????? ?????? ? ?????????? ? ???????? ????????-?????????? ? ????? ? ???????.
//?????????, ?? ??????? ?????, ????? ? ?????? ????????? ?????.

long film2;
long internet;
cout << "??????? ????? ?????? ? ??: ";
cin >> film2;
cout << "??????? ???????? ?????? ???????? ?????????? ???/???: ";
cin >> internet;
cout << "?? ???????? ????? ?? " << ((film2 * 1073741824) / internet) / 3600 << " ????  ??? " << ((film2 * 1073741824) / internet) / 60 << " ????? " << ((film2 * 1073741824) / internet) << " ??? ??????";
cout << "\n";
cout << "\n";







}