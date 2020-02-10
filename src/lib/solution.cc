#include "solution.h"
#include <iostream>

void AcademicRecord::operator ++() {
  if (AcademicRecord::maths > 90)
      AcademicRecord::maths = 100;
    else
      AcademicRecord::maths += 10;

    if (AcademicRecord::computers > 90)
      AcademicRecord::computers = 100;
    else
      AcademicRecord::computers += 10;

    if (AcademicRecord::physics > 90)
      AcademicRecord::physics = 100;
    else
      AcademicRecord::physics += 10;
}

void AcademicRecord::operator ++(int) {
  if (AcademicRecord::maths > 90)
      AcademicRecord::maths = 100;
    else
      AcademicRecord::maths += 10;

    if (AcademicRecord::computers > 90)
      AcademicRecord::computers = 100;
    else
      AcademicRecord::computers += 10;

    if (AcademicRecord::physics > 90)
      AcademicRecord::physics = 100;
    else
      AcademicRecord::physics += 10;
}

void AcademicRecord::operator --() {
if (AcademicRecord::maths < 20)
      AcademicRecord::maths = 0;
    else
      AcademicRecord::maths -= 20;

    if (AcademicRecord::computers < 20)
      AcademicRecord::computers = 0;
    else
      AcademicRecord::computers -= 20;

    if (AcademicRecord::physics < 20)
      AcademicRecord::physics = 0;
    else
      AcademicRecord::physics -= 20;
}

void AcademicRecord::operator --(int) {
if (AcademicRecord::maths < 20)
      AcademicRecord::maths = 0;
    else
      AcademicRecord::maths -= 20;

    if (AcademicRecord::computers < 20)
      AcademicRecord::computers = 0;
    else
      AcademicRecord::computers -= 20;

    if (AcademicRecord::physics < 20)
      AcademicRecord::physics = 0;
    else
      AcademicRecord::physics -= 20;
}

void AcademicRecord::operator +=(const int &marks) {
  AcademicRecord::maths += marks;
    if (AcademicRecord::maths > 100)
      AcademicRecord::maths = 100;

    AcademicRecord::computers += marks;
    if (AcademicRecord::computers > 100)
      AcademicRecord::computers = 100;

    AcademicRecord::physics += marks;
    if (AcademicRecord::physics > 100)
      AcademicRecord::physics = 100;
}

void AcademicRecord::operator -= (const int &marks) {
  AcademicRecord::maths -= marks;
    if (AcademicRecord::maths < 0)
      AcademicRecord::maths = 0;

    AcademicRecord::computers -= marks;
    if (AcademicRecord::computers < 0)
      AcademicRecord::computers = 0;

    AcademicRecord::physics -= marks;
    if (AcademicRecord::physics < 0)
      AcademicRecord::physics = 0;
}

bool AcademicRecord :: operator == (const AcademicRecord &academicRecord)
  {
    if ((AcademicRecord::maths == academicRecord.maths) && (AcademicRecord::computers == academicRecord.computers) && (AcademicRecord::physics == academicRecord.physics))
      return true;
    else
      return false;
  }

  std::string AcademicRecord::print() {
    return "Maths::" + std::to_string(AcademicRecord::maths) + "\nComputers::" + std::to_string(AcademicRecord::computers) + "\nPhysics::" + std::to_string(AcademicRecord::physics);
  }