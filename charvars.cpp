//charvars.cpp
//применение символьных констант
#include <iostream>				//для cout и т.п.

using namespace std;

int main()
{
	char charvar1 = 'A';		//символьная переменная	со значением 'A'	
	char charvar2 = '\t';		//символьная переменная со значением символа табуляции
	cout << charvar1;			//вывод переменной на экран
	cout << charvar2;			//вывод переменной на экран
	charvar1 = 'B';				//присваивание константного значения символьной переменной
	cout << charvar1;			//вывод переменной на экран
	cout << '\n';				//переход на следующую строку
	system("pause");
	return 0;
}