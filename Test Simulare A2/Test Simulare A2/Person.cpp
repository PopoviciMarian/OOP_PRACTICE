#include "Person.h"
#include <iostream>

#pragma disable(warning : 4996);
#define _CRT_SECURE_NO_WARNINGS
const char* Person::operator[](const char* s) {
	
	if (strcmp(s, "nume") == 0) {
		return this->nume;
	}
	
	if (strcmp(s, "varsta") == 0) {
		char s2[33];
		_itoa_s(varsta, s2, 10);
		const char* ss = _strdup(s2);
		return ss;
	}
}

void Person::addNote(int x) {
	nrNote++;
	sumNote += x;
}

Person::operator int() {
	return sumNote / nrNote;
}