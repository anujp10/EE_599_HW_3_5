#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class AcademicRecord
{
public:
  AcademicRecord()
  {
    maths = 0;
    computers = 0;
    physics = 0;
  }

  AcademicRecord(int math, int comp, int phys)
  {
    maths = math;
    computers = comp;
    physics = phys;
  }

  AcademicRecord(const AcademicRecord &AcademicRecord)
  {
    maths = AcademicRecord.maths;
    computers = AcademicRecord.computers;
    physics = AcademicRecord.physics;
  }

  void operator ++();
  void operator ++(int);
  void operator --();
  void operator --(int);
  void operator +=(const int &marks);
  void operator -=(const int &marks);
  bool operator==(const AcademicRecord &AcademicRecord);
  std::string print();
  
  int maths;
  int computers;
  int physics;
};

#endif