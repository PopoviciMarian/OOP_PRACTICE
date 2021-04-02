#include "Math.h"
#include <cstring>
#include<stdarg.h>
#include<stdio.h>
#pragma disable(warning 4996);

int Math::Add(int a, int b) {
	return a + b;
}
int Math::Add(int a, int b, int c) {
	return a + b + c;
}
int Math::Add(double a, double b) {
	return a + b;
}
int Math::Add(double a, double b, double c) {
	return a + b + c;
}
int Math::Mul(int a, int b) {
	return a * b;
}
int Math::Mul(int a, int b, int c) {
	return a * b * c;
}
int Math::Mul(double a, double b) {
	return a * b;
}
int Math::Mul(double a, double b, double c) {
	return a * b * c;
}
int Math::Add(int count, ...) {
	int sum = 0;
	va_list ap;
	va_start(ap, count);

	for (int i = 0; i < count; i++) {
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return sum;
}
char* Math::Add(const char* s1, const char* s2) {
	if (s1 == nullptr || s2 == nullptr) {
		return nullptr;
	}
	char* s = new char[strlen(s1) + strlen(s2) + 1] ;
	memcpy(s, s1, strlen(s1) + 1);
	memcpy(s + strlen(s1) , s2, strlen(s2) + 1);
	return s;

}