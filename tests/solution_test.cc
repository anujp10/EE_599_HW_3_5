#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(OperatorShould, OperatorReturn) {
  AcademicRecord actual = AcademicRecord(95, 91, 98);
  actual++;
  AcademicRecord expected = AcademicRecord(100, 100, 100);
  EXPECT_EQ(expected.maths, actual.maths);
  EXPECT_EQ(expected.computers, actual.computers);
  EXPECT_EQ(expected.physics, actual.physics);
}

TEST(OperatorShould_1, OperatorReturn_1) {
  AcademicRecord actual = AcademicRecord(5, 1, 13);
  actual--;
  AcademicRecord expected = AcademicRecord(0, 0, 0);
  EXPECT_EQ(expected.maths, actual.maths);
  EXPECT_EQ(expected.computers, actual.computers);
  EXPECT_EQ(expected.physics, actual.physics);
}

TEST(OperatorShould_2, OperatorReturn_2) {
  AcademicRecord actual = AcademicRecord(25, 31, 93);
  actual++;
  AcademicRecord expected = AcademicRecord(35, 41, 100);
  EXPECT_EQ(expected.maths, actual.maths);
  EXPECT_EQ(expected.computers, actual.computers);
  EXPECT_EQ(expected.physics, actual.physics);
}

TEST(OperatorShould_3, OperatorReturn_3) {
  AcademicRecord actual = AcademicRecord(19, 51, 39);
  actual--;
  AcademicRecord expected = AcademicRecord(0, 31, 19);
  EXPECT_EQ(expected.maths, actual.maths);
  EXPECT_EQ(expected.computers, actual.computers);
  EXPECT_EQ(expected.physics, actual.physics);
}

TEST(OperatorShould_4, OperatorReturn_4) {
  AcademicRecord actual = AcademicRecord(25, 31, 93);
  actual += 30;
  AcademicRecord expected = AcademicRecord(55, 61, 100);
  EXPECT_EQ(expected.maths, actual.maths);
  EXPECT_EQ(expected.computers, actual.computers);
  EXPECT_EQ(expected.physics, actual.physics);
}

TEST(OperatorShould_5, OperatorReturn_5) {
  AcademicRecord actual = AcademicRecord(1, 51, 39);
  actual -= 2;
  AcademicRecord expected = AcademicRecord(0, 49, 37);
  EXPECT_EQ(expected.maths, actual.maths);
  EXPECT_EQ(expected.computers, actual.computers);
  EXPECT_EQ(expected.physics, actual.physics);
}

TEST(OperatorShould_6, OperatorReturn_6) {
  AcademicRecord actual = AcademicRecord(1, 51, 39);
  AcademicRecord expected = actual;
  EXPECT_EQ(expected.maths, actual.maths);
  EXPECT_EQ(expected.computers, actual.computers);
  EXPECT_EQ(expected.physics, actual.physics);
}

TEST(OperatorShould_7, OperatorReturn_7) {
  AcademicRecord student1 = AcademicRecord(71, 71, 71);
  AcademicRecord student2 = AcademicRecord(41, 41, 41);
  bool actual;
  bool expected = true;
  student2 += 30;
  if (student1 == student2)
    actual = true;
  else
    actual = false;

  EXPECT_EQ(expected, actual);
}

TEST(OperatorShould_8, OperatorReturn_8) {
  AcademicRecord student1 = AcademicRecord(21, 70, 1);
  AcademicRecord student2 = AcademicRecord(1, 2, 3);
  bool actual;
  bool expected = false;
  if (student1 == student2)
    actual = true;
  else
    actual = false;

  EXPECT_EQ(expected, actual);
}