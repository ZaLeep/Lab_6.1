#include "Header.h"
void Menu();

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
			float x;
			cout << "Введите значение аргумента х: "; cin >> x;
			system("cls");
			Const constant(c);
			cout << "Значение константы: " << constant.CountValueOfFunction(x);
			_getch();
			system("cls");
		}
		if (q == '2') {
			float x;
			cout << "Введите значение аргумента х: "; cin >> x;
			system("cls");
			LinearFunction line(b, c);
			cout << "Значение функции: " << line.CountValueOfFunction(x);
			_getch();
			system("cls");
		}
		if (q == '3') {
			float x;
			cout << "Введите значение аргумента х: "; cin >> x;
			system("cls");
			Parabola parabola(a, b, c);
			cout << "Значение функции: " << parabola.CountValueOfFunction(x);
			_getch();
			system("cls");
		}
	}
}