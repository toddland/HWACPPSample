#pragma once
#include <cinttypes>
using u8_8 = std::uint16_t;

namespace Numbers
{
	public ref class NumClass sealed
	{
	public:
		NumClass();
		int randomNumber(int min, int max);
		void setNum(int x);
		int getNum();
		int factorial(int x);
		float add(float a, float b);
		u8_8 float_to_fixed(float f);
		float fixed_to_float(u8_8 i);
		u8_8 addHelper(u8_8 a, u8_8 b);
	};
}

