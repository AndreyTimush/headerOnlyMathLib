#pragma once
namespace mathlib
{
	bool isError = false;
	int sum(int a, int b) {
		long long summa = static_cast<long long>(a) + static_cast<long long>(b);
		if (summa > INT_MAX || summa < INT_MIN) {
			printf("Ошибка переполнения\n");
			isError = true;
			return 0;
		}
		return a + b;
	}

	int subtraction(int a, int b) {
		long long res = static_cast<long long>(a) - static_cast<long long>(b);
		if (res > INT_MAX || res < INT_MIN) {
			printf("Ошибка переполнения\n");
			isError = true;
			return 0;
		}
		return a - b;
	}
	
	float division(int a, int b) 
	{ 
		if (b != 0) {
			return static_cast<float>(a) / static_cast<float>(b);
		}
		return -1;
	}

	int multiply(int a, int b) {
		long long mul = static_cast<long long>(a) * static_cast<long long>(b);
		if (mul > INT_MAX || mul < INT_MIN) {
			isError = true;
			printf("Ошибка переполнения\n");
			return 0;
		}
		return a * b;
	}

	int pow(int a, int b) {
		long long res = 1;
		for (int i = 1; i <= b; i++) {
			res = res * a;
			if (res > INT_MAX || res < INT_MIN) {
				isError = true;
				printf("Ошибка переполнения\n");
				return 0;
			}
		}
		return res;
	}

	int factorial(int a) {
		int result = 1;
		if (a > 12) {
			isError = true;
			printf("Ошибка переполнения\n");
			return 0;
		}
		if (a <= 1) {
			return result;
		}
		return a * factorial(a - 1);
	}
}
