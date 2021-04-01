#include "CompareStudents.h"

double compareByName(Student s1, Student s2) {
	return strcmp(s1.getName(), s2.getName());
}

double compareByMathGrade(Student s1, Student s2) {
	return s1.getMathGrade() - s2.getMathGrade();
}

double compareByHistoryGrade(Student s1, Student s2) {
	return s1.getHistoryGrade() - s2.getHistoryGrade();
}

double compareByEanglishGrade(Student s1, Student s2) {
	return s1.getEnglishhGrade() - s2.getEnglishhGrade();
}

double compareByAverageGrade(Student s1, Student s2) {
	return s1.getAverageGrade() - s2.getAverageGrade();
}