#include <iostream>
#include "src/lib/solution.h"

int main()
{
    AcademicRecord student1;
    AcademicRecord student2;
    student1.maths = 5;
    student1.computers = 10;
    student1.physics = 95;
    std::cout << "Value before incrementation ::" << student1.print() << std::endl;
    student1++;
    std::cout << "Value after incrementation ::" << student1.print() << std::endl;
    student1--;
    std::cout << "Value after decrementation ::" << student1.print() << std::endl;
    student2 = student1;
    std::cout << "Value of Object 2 ::" << student1.print() << std::endl;
    student2 += 50;
    std::cout<< "Value of Object 2 after increasing marks by 50 for each subject::" << student2.print() << std::endl;
    student2 -= 30;
    std::cout<< "Value of Object 2 after decreasing marks by 30 for each subject::" << student2.print() << std::endl;

return EXIT_SUCCESS;
}