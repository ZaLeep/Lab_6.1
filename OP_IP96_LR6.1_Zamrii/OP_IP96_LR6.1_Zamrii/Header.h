#include <iostream>
#include <iomanip>
#include <cmath> 
#include <conio.h>

using namespace std;

class SingleFunction {
protected:
	float a, b, c;
public:
	SingleFunction();
	virtual float CountValueOfFunction(float x) = 0;
};

class Const : public SingleFunction {
public:
	Const(float c);
	float CountValueOfFunction(float x) override;
};

class LinearFunction : public SingleFunction {
public:
	LinearFunction(float b, float c);
	float CountValueOfFunction(float x) override;
};

class Parabola : public SingleFunction {
public:
	Parabola(float a, float b, float c);
	float CountValueOfFunction(float x) override;
};