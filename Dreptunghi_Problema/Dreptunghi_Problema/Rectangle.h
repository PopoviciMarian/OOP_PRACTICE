#pragma once
#include <math.h>
#include <iostream>
using namespace std;
struct Punct{
	int x, y;
};

class Rectangle{
public:
	Punct p[4];
	Punct* begin() { return &p[0]; };
	Punct* end() { return &p[4]; };
	Rectangle(int a, int b, int c, int d) {
		if (a < c && b < d) {
			p[0].x = a;
			p[0].y = b;

			p[1].x = c;
			p[1].y = b;

			p[2].x = c;
			p[2].y = d;

			p[3].x = a;
			p[3].y = d;
		}
		else{
			p[0].x = a;
			p[0].y = d;

			p[1].x = c;
			p[1].y = d;

			p[2].x = c;
			p[2].y = b;

			p[3].x = a;
			p[3].y = b;
		}

	}

	operator bool() {
		return abs(p[0].x - p[1].x) == abs(p[0].y - p[2].y);
	}

	Rectangle friend operator & (Rectangle r1, Rectangle r2) {
		Rectangle res{
		min(r1.p[0].x, min(r1.p[1].x, min(r2.p[0].x, r2.p[1].x))),
		min(r1.p[0].y, min(r1.p[2].y, min(r2.p[0].y, r2.p[2].y))),
		
		max(r1.p[0].x, max(r1.p[1].x, max(r2.p[0].x, r2.p[1].x))),
		max(r1.p[0].y, max(r1.p[2].y, max(r2.p[0].y, r2.p[2].y))),
		};
		return res;
	}
	Punct GetTopLeftPoint() {
		Punct punct;
		punct.x = min(p[0].x, p[1].x);
		punct.y = min(p[0].y, p[2].y);
		return punct;
	}

	int Width() {
		return abs(p[0].x - p[1].x);
	}
	int Height() {
		return abs(p[0].y - p[2].y);
	}
};

