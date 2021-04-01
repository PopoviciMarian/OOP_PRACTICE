#pragma once
class Student{
	const char* name;
	double math_grade;
	double english_grade;
	double history_grade;
public:
	void setName(const char*);
	const char* getName();
	void setMathGrade(double grade);
	double getMathGrade();
	void setEnglishGrade(double grade);
	double getEnglishhGrade();
	void setHistoryGrade(double grade);
	double getHistoryGrade();
	double getAverageGrade();
};

