
#include <iostream>
#include "Student.h"
#include "CompareStudents.h"

int main()
{
    Student s1;
    Student s2;
    s1.setName("Ion");
    s1.setMathGrade(5.3);
    s1.setEnglishGrade(4);
    s1.setHistoryGrade(8.4);


    s2.setName("Nicu");
    s2.setMathGrade(7.5);
    s2.setEnglishGrade(4);
    s2.setHistoryGrade(1.4);
    
    std::cout << compareByName(s1, s2) << std::endl;
    std::cout << compareByMathGrade(s1, s2) << std::endl;
    std::cout << compareByEanglishGrade(s1, s2) << std::endl;
    std::cout << compareByHistoryGrade(s1, s2) << std::endl;
    std::cout << compareByAverageGrade(s1, s2) << std::endl;

}

