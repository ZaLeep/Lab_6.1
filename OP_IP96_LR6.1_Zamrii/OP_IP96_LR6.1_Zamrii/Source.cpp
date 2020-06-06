#include "Header.h"

SingleFunction::SingleFunction() {
	this->a = 0;
	this->b = 0;
	this->c = 0;
}

Const::Const(float c) {
	this->c = c;
}

float Const::CountValueOfFunction(float x) {
	return c;
}

LinearFunction::LinearFunction(float b, float c) {
	this->b = b;
	this->c = c;
}

float LinearFunction::CountValueOfFunction(float x) {
	return b * x + c;
}

Parabola::Parabola(float a, float b, float c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

float Parabola::CountValueOfFunction(float x) {
	return a * pow(x, 2) + b * x + c;
}