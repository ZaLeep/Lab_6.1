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