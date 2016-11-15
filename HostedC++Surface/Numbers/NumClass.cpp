#include "NumClass.h"
#include <stdlib.h>   
#include <cinttypes>

using namespace Numbers;
using namespace Platform;
using u8_8 = std::uint16_t;

int num;

NumClass::NumClass() {
	num = 0;
}

int NumClass::randomNumber(int min, int max) {
	int diff = max - min + 1;
	return rand() % diff + min;
}

int NumClass::getNum() {
	return num;
}

void NumClass::setNum(int x) {
	num = x;
}

int NumClass::factorial(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x*factorial(x - 1);
	}
}

float NumClass::add(float a, float b) {
	return fixed_to_float(addHelper(float_to_fixed(a), float_to_fixed(b)));
}

u8_8 NumClass::float_to_fixed(float f) {
	return f * 256;
}

float NumClass::fixed_to_float(u8_8 i) {
	return i / 256.f;
}

u8_8 NumClass::addHelper(u8_8 a, u8_8 b) {
	return a + b;
}
