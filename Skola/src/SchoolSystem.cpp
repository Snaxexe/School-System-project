#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	int counter = 0;
	while (true) {
		std::cout << "loop; " << counter++ << "\n";
		std::cin.get();
	}
}

void SchoolSystem::AddStudent()
{
	Student student;
	student.name = "Amogus";
	student.age = 123;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{
}
