#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "RUS");
	/*
???????? ?????????, ??????? ??????????? ????????? ? ?????????? ??????? ????? ?
?????? ?????????? ? ?????????? ? ??????
	*/

	//float chislo;
	//cout << "??????? ??????? ?????: ";
	//cin >> chislo;
	//cout << chislo << " ??. - ??? " << int(chislo) << " ?? " << (chislo - int(chislo)) * 1000 << " ??????" << endl;


	/*
???????? ?????????, ??????? ?????? ??????????, ????? ?? ??????? ???? ?? ??????? 
????? ??????? ?????.
??????? ???????? ?????? (?????? ? ??????) ? ??????? ????? (??????, ?????? ?
???????) ? ????????? ?????? ????????????.
??????????. ??????, ??? ???? ????? ?????? ??? ?????? ?? ???????????? ????. ?? 
????, ??? ??????? ?????? ??????? ?????????, ??? ???? ????? ??????? ? 
????????????, ??? ? ???????? ?????.
	*/

	/*int vysotadveri, shirinadveri, vysotashafa, shirinashkafa, glubinashkafa;
	cout << "??????? ?????? ???????? ??????, ??: ";
	cin >> shirinadveri;
	cout << "??????? ?????? ???????? ??????, ??: ";
	cin >> vysotadveri;
	cout << "??????? ?????? ?????, ??: ";
	cin >> vysotashafa;
	cout << "??????? ?????? ?????, ??: ";
	cin >> shirinashkafa;
	cout << "??????? ??????? ?????, ??: ";
	cin >> glubinashkafa;
	if (vysotashafa >= vysotadveri && shirinashkafa >= shirinadveri && glubinashkafa >= vysotadveri)
		cout << "???? ?? ??????? ????? ?????! ???????? ?????? ??????" << endl;
	else if (glubinashkafa >= shirinadveri)
		cout << "???? ?? ??????? ????? ?????! ???????? ?????? ??????" << endl;
	else
		cout << "???? ????? ??????? ?? ??????? ????? ??????? ?????." << endl;*/
	
/*
???? ???????????? ?????????? ? 255-? ???? ???? (??? ???? 1 ?????? ????????? ???????
????). ????????? ???????? ?????????, ??????? ????????? ???? (?????, ????? ? ????
?????? ?????????????? ?????????), ?? ??????? ?????????? ???? ???????????? ?
???????? ????.
? ????????????? ????????? ?????????? ????????:
- ???, ????? ???????? ??????? ?????? ?? 400;
- ???, ????? ???????? ??????? ?? 4, ?? ?? ??????? ?? 100.
*/
  

/*
????????? ?????????-????: ?? ?????? ?? ??????? ?????? ?????????? ???????, ?
?????????? ???????. ???????????? ?????? ??????? ???? ?? ????????? ?????? ?? ??????
??????.
? ????? ?????? ????????? ?????? ??????? ?? ????? ?????????? ?????????? ??????? ?
???????????? ???? ?? ??????????? ?????.
*/

	//int correct, answer;
	//correct = 0;
	//cout << "?????? 1: ??????? ???? ? ?????????? ?????" << endl;
	//cout << "1) 350" << endl << "2) 365" << endl << "3) 366" << endl;
	//cin >> answer;
	//if (answer == 3) 
	//{
	//	cout << "?????" << endl;
	//	correct++;
	//}
	//else
	//	cout << "?? ?????" << endl;
	//cout << "?????? 2: ? ????? ???? ??????? ?.?.???????" << endl;
	//cout << "1) 1799" << endl << "2) 1796" << endl << "3) 1679" << endl;
	//cin >> answer;
	//if (answer == 1)
	//{
	//	cout << "?????" << endl;
	//	correct++;
	//}
	//else
	//	cout << "?? ?????" << endl;
	//cout << "??????? ??????? ? ????" << endl;
	//cout << "1) 13" << endl << "2) 12" << endl << "3) 11" << endl;
	//cin >> answer;
	//if (answer == 2)
	//{
	//	cout << "?????" << endl;
	//	correct++;
	//}
	//else
	//	cout << "?? ?????" << endl;

	//cout << "????????? ?????: " << correct << " ????? ?? 3 ?????????";

/*
?? ??????????? ???????????? ???????????? ????????, ?? ?????????????? ?? ?????? ?
???????? ????? ? ???????. ???????????? ??????? ???????? ????? ????? ? ????????????
???????, ??? ????? ?????? ???? ???? ????? ????? ????????? ????. ?.?. ????? ? ???????
385916 ? ????????????, ?.?. 3+8+5=9+1+6.
a*) ??? ????????? ???????? ?????????, ??????? ????????? ?????????????? ??????.
b**) ????????? ?????????? ???? ?????????? ??????? ? ?????? ??????????.

*/
//cout << "??????? ????? ??????: ";
//int ticket, b, c;
//cin >> ticket;
//b = ticket / 1000;
//c = ticket % 1000;
//if (b / 100 + (b / 10) % 10 + b % 10 == c / 100 + (c / 10) % 10 + c % 10)
//	cout << "????? ? ??????? " << ticket << " ? ????????????";
//else 
//	cout << "????? ? ??????? " << ticket << " ? ? ?? ???????????";
//



/*
?????????? ? ??????????? ?? ?????? ?????????? ???? ??????????? ??????????? ????? N, ?
??????? ??? ??? ????? ????????, ???????????. (100 <= N <= 999). ??????? ?? ?????
?????????? ???? ????? ??????????? ?????.
*/

int summ = 0;
for (int i = 100; i <= 999; i++)
{
	if ((i / 10) % 10 != i % 10 && i / 100 != i % 10 && i / 100 != (i / 10) % 10) {
		summ += i;
	}
}
cout << "????? ???? ????? ?? 100 ?? 999 ????? ? ??????? ??? ??? ????? ????????: " << summ << "\n";


}