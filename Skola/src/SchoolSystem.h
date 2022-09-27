#pragma once
#include "Student.h"
#include <vector>
#include <iostream>
#include <string>

class SchoolSystem
{
public:
	void Run();
	void AddStudent(std::string name, int age, std::string klass);
	void RemoveStudent();

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;

private:

};