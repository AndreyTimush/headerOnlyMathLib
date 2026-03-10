#pragma once
namespace mathlib
{
	int sum(int a, int b) {
		return a + b;
	}

	int subtraction(int a, int b) {
		return a - b;
	}
	
	float division(int a, int b) 
	{ 
		if (b != 0) {
			return a / b;
		}
		return 0;
	}

	int multiply(int a, int b) {
		return a * b;
	}

	int pow(int a, int b) {
		int res = 1;
		for (int i = 1; i <= b; i++) {
			res = res * a;
		}
		return res;
	}

	int factorial(int a) {
		return a * factorial(a - 1);
	}
}
