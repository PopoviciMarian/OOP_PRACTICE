#pragma once
#include "Punct.h"
#include <iostream>
#pragma disable(warning : 4996);
class Circle{
public:
	Punct c[4];
	int x_c;
	int y_c;
	int ray;
	Circle(int a, int b, int r) : x_c(a), y_c(b), ray(r) { c[0] = { a, b - r }; c[1] = { a + r, b }; c[2] = { a, b + r }; c[3] = { a - r, b }; };

	friend bool operator == (Circle cerc, Punct p) { 
		return cerc.ray* cerc.ray == (((cerc.x_c - p.x) * (cerc.x_c - p.x)) + (cerc.y_c - p.y) * (cerc.y_c - p.y));}
	
	friend bool operator > (Circle cerc, Punct p) { 
		return cerc.ray* cerc.ray > (((cerc.x_c - p.x) * (cerc.x_c - p.x)) + (cerc.y_c - p.y) * (cerc.y_c - p.y));}

	operator int() {
		return ray * 2;
	}
	Circle operator ()(const char* s, int dif) {
		if (strcmp(s, "add_to_x") == 0) {
			this->x_c += dif;
		}
		if (strcmp(s, "add_to_y") == 0) {
			this->y_c += dif;
		}
		if (strcmp(s, "add_to_ray") == 0) {
			this->ray += dif;
		}
		return *this;
	}
	const char* operator [](const char* s) {
		char buf[33];
		if (strcmp(s, "x") == 0) {
			_itoa_s(x_c, buf, 10);
		}
		if (strcmp(s, "y") == 0) {
			_itoa_s(y_c, buf, 10);
		}
		if (strcmp(s, "ray") == 0) {
			_itoa_s(ray, buf, 10);
		}
		const char* rez = _strdup(buf);
		return rez;
	}
};

