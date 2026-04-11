#include <stdexcept>
#include <climits>
#pragma once
namespace mathlib
{
	int sum(int a, int b) {
		int summa;
		if (__builtin_add_overflow(a, b, &summa)) {
			throw std::overflow_error("integer overflow");
		}
		return summa;
	}

	int subtraction(int a, int b) {
		int res;
		if (__builtin_sub_overflow(a, b, &res)) {
			throw std::overflow_error("Ошибка переполнения\n");
		}
		return res;
	}
	
	float division(int a, int b) 
	{ 
		if (b == 0) {
        	throw std::runtime_error("Division by zero\n");
    	}
    
    	if (a == INT_MIN && b == -1) {
        	throw std::overflow_error("overflow error");
    	}
    
    	float res = static_cast<float>(a) / static_cast<float>(b);
    	return res;
	}

	int multiply(int a, int b) {
		long long mul = static_cast<long long>(a) * static_cast<long long>(b);
		if (mul > INT_MAX || mul < INT_MIN) {
			throw std::overflow_error("Ошибка переполнения\n");
		}
		return mul;
	}

	int pow(int a, int b) {
		long long res = 1;
		for (int i = 1; i <= b; i++) {
			res = res * a;
			if (res > INT_MAX || res < INT_MIN) {
				throw std::overflow_error("Ошибка переполнения\n");
			}
		}
		return static_cast<int>(res);
	}

	int factorial(int a) {
		int result = 1;
		if (a > 12) {
			throw std::overflow_error("Ошибка переполнения\n");
		}
		if (a <= 1) {
			return result;
		}
		return a * factorial(a - 1);
	}
}
