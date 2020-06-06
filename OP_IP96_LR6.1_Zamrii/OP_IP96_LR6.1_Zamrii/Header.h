#include <iostream>
#include <iomanip>
#include <cmath> 
#include <conio.h>

using namespace std;

class SingleFunction {
protected:
	float a, b, c; //Три коефициента в уравнении вида y = ax^2 + bx + c
public:
	SingleFunction();
	virtual float CountValueOfFunction(float x) = 0; // Виртуальный метод определения значения функции 
};

class Const : public SingleFunction {
public:
	Const(float c); // Константа имеет единственный свободный коеффициент
	float CountValueOfFunction(float x) override;
};

class LinearFunction : public SingleFunction {
public:
	LinearFunction(float b, float c); // Линейная функция имеет коеффициент при х и свободный 
	float CountValueOfFunction(float x) override;
};

class Parabola : public SingleFunction {
public:
	Parabola(float a, float b, float c); // парабола имеет три коеффициента при х^2, при х и свободный
	float CountValueOfFunction(float x) override;
};

void Menu() {
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