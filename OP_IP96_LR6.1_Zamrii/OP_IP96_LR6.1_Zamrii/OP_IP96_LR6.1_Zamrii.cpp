#include "Header.h"

void Menu();
void Count(SingleFunction* function);

int main() {
	setlocale(LC_ALL, "rus");
	cout << "Замрий Алексей IP-96 вариант 9(Б)" << endl << "Проектировка иерархии классов: функция одной переменной с наследиками: константа, линейная функция и парабола. С возможностью вычисления значения функции.";
	_getch();
	system("cls");
	Menu();
}

void Menu() {
	setlocale(LC_ALL, "rus");
	bool T = true;
	float a, b, c;
	cout << "Введите коефициент а: "; cin >> a;
	cout << "Введите коефициент b: "; cin >> b;
	cout << "Введите коефициент c: "; cin >> c;
	system("cls");
	char q;
	SingleFunction* function;
	while (T) { // Работа меню
		cout << "Нажмите \"0\" что бы выйти." << endl << "Нажмите \"1\", что бы определить значение константы." << endl << "Нажмите \"2\", что бы определить значение линейного уравнения." << endl << "Нажмите \"3\", что бы определить значение параболического уравнения." << endl << "Нажмите \"*\", что бы изменить коефициенты." << endl;
		q = _getch();
		system("cls");

		if (q == '0')
			T = 0;
		if (q == '*') {
			cout << "Введите коефициент а: "; cin >> a;
			cout << "Введите коефициент b: "; cin >> b;
			cout << "Введите коефициент c: "; cin >> c;
			system("cls");
		}
		if (q == '1') {
			function = new Const(c);
			Count(function);
			_getch();
			delete function;
			system("cls");
		}
		if (q == '2') {
			function = new LinearFunction(b, c);
			Count(function);
			_getch();
			delete function;
			system("cls");
		}
		if (q == '3') {
			function = new Parabola(a, b, c);
			Count(function);
			_getch();
			delete function;
			system("cls");
		}
	}
}

void Count(SingleFunction* function) {
	float x;
	cout << "Введите значение аргумента х: "; cin >> x;
	cout << "Значение функции: " << function->CountValueOfFunction(x);
}