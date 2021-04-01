#include "Student.h"

void Student::setName(const char* s) {
	name = s;
}

const char* Student::getName() {
	return name;
}

void Student::setMathGrade(double grade) {
	math_grade = grade;
}

double Student::getMathGrade() {
	return math_grade;
}


void Student::setEnglishGrade(double grade) {
	english_grade = grade;
}
double Student::getEnglishhGrade() {
	return english_grade;
}

void Student::setHistoryGrade(double grade) {
	history_grade = grade;
}
double Student::getHistoryGrade() {
	return history_grade;
}

double Student::getAverageGrade() {
	return (math_grade + english_grade + history_grade) / 3.f;
}


