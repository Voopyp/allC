#include <iomanip>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	int month;
	int year;
	string monthsList[12] = { "Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь" };
	int mDays[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	cout << "Введите номер месяца: ";
	cin >> month;
	while (month <1 || month > 12)
	{
		cout << "Введите номер месяца от 1-12";
		cin >> month;
	}
	cout << "Введите номер года от 1900 до 2035:";
	cin >> year;
	while (year < 1900 || year > 2035)
	{
		cout << "Неверно введен год напишите число от 1900 до 2035";
		cin >> year;
	}
	cout << "..................." << endl;
	cout << "Celendar - " << year << endl;
	cout << "..................." << endl << endl;
	/*
	Определим день недели
	0-6
	*/

	int days;
	int current;
	static int t[] = { 6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	int y = year %100;
	current = y / 12 + y % 12 + y % 12 / 4 + t[month - 1] + (20 - year / 100);
	if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && month <= 2) current--;
	current = current % 7;
	/*
	Проверка на високосный год
	*/

	if (int i = month - 1)
	{
		if (i == 2)
			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
				days = 29;
			else days = mDays[month - 1];
		else days = mDays[month - 1];

		/*
		Ввыводим календарь
		*/
		cout << endl << ".........." << monthsList[i] << "............" << endl;
		cout << "     Пн   Вт   Ср   Чт   Пт   Сб    Вс" << endl;
		/*
		Доп переменые 
		k- количество дней в неделе(0-6)
		j- количество дней в месяце (от 1 до ..)
		*/

		int k;
		for (k = 0; k < current;k++)
			cout << "       ";
		for (int j = 1; j <= days; j++)
		{
			k++;
			cout << "\033[31m" << setw(5) << j << "\033[0m";
			if (k > 6)
			{
				k = 0;
				cout << endl;
			}
		}
		if (k)
			cout << endl;

		current = k;
	}

	return 0;

}











