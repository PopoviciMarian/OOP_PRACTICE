#pragma once
class Person
{
	const char* nume;
	int varsta;
	float inaltime;
	int sumNote = 0;
	int nrNote = 0;
public:
	Person(const char* s, int v, float i) : nume(s), varsta(v), inaltime(i) {};
	const char* operator [](const char *);
	void addNote(int x);
	operator int();
};

