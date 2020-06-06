#include <iostream>
#include <iomanip>
#include <cmath> 
#include <conio.h>

using namespace std;

class SingleFunction {
protected:
	float a, b, c; //��� ����������� � ��������� ���� y = ax^2 + bx + c
public:
	SingleFunction();
	virtual float CountValueOfFunction(float x) = 0; // ����������� ����� ����������� �������� ������� 
};

class Const : public SingleFunction {
public:
	Const(float c); // ��������� ����� ������������ ��������� �����������
	float CountValueOfFunction(float x) override;
};

class LinearFunction : public SingleFunction {
public:
	LinearFunction(float b, float c); // �������� ������� ����� ����������� ��� � � ��������� 
	float CountValueOfFunction(float x) override;
};

class Parabola : public SingleFunction {
public:
	Parabola(float a, float b, float c); // �������� ����� ��� ������������ ��� �^2, ��� � � ���������
	float CountValueOfFunction(float x) override;
};

void Menu() {
	bool T = true;
	float a, b, c;
	cout << "������� ���������� �: "; cin >> a;
	cout << "������� ���������� b: "; cin >> b;
	cout << "������� ���������� c: "; cin >> c;
	system("cls");
	char q;
	while (T) { // ������ ����
		cout << "������� \"0\" ��� �� �����." << endl << "������� \"1\", ��� �� ���������� �������� ���������." << endl << "������� \"2\", ��� �� ���������� �������� ��������� ���������." << endl << "������� \"3\", ��� �� ���������� �������� ��������������� ���������." << endl << "������� \"*\", ��� �� �������� �����������." << endl;
		q = _getch();
		system("cls");

		if (q == '0')
			T = 0;
		if (q == '*') {
			cout << "������� ���������� �: "; cin >> a;
			cout << "������� ���������� b: "; cin >> b;
			cout << "������� ���������� c: "; cin >> c;
			system("cls");
		}
		if (q == '1') {
			float x;
			cout << "������� �������� ��������� �: "; cin >> x;
			system("cls");
			Const constant(c);
			cout << "�������� ���������: " << constant.CountValueOfFunction(x);
			_getch();
			system("cls");
		}
		if (q == '2') {
			float x;
			cout << "������� �������� ��������� �: "; cin >> x;
			system("cls");
			LinearFunction line(b, c);
			cout << "�������� �������: " << line.CountValueOfFunction(x);
			_getch();
			system("cls");
		}
		if (q == '3') {
			float x;
			cout << "������� �������� ��������� �: "; cin >> x;
			system("cls");
			Parabola parabola(a, b, c);
			cout << "�������� �������: " << parabola.CountValueOfFunction(x);
			_getch();
			system("cls");
		}
	}
}