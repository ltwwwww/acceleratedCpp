#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "Student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);
bool fgrade(const Student_info&);
std::vector<Student_info> extrace_fails(std::vector<Student_info>&);
double aux_grade(const Student_info&);
double average(const std::vector<double>&);
double average_grade(const Student_info& );
double average_grade(const Student_info&);
double optimistic_median(const Student_info&);
#endif