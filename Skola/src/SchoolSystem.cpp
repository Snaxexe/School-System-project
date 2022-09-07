#include "SchoolSystem.h"
#include <string>
void SchoolSystem::Run()
{
	std::cout << "School System" << "\n" << "To add a student, Press: 1" << "\n" << "To delete a student, Press: 2" << "\n";

	int input;
	std::cin >> input;
	if (input == 1)
	{
		std::string name = "";
		int age = 0;

		std::cout << "Write the students name: " << "\n";
		std::cin >> name;
		std::cout << "Now write the students age: " << "\n";
		std::cin >> age;

		AddStudent(name, age);

		for (auto i : students) 
		{
			std::cout << i.name << "\n";
			std::cout << i.age << "\n";
		}
		 
	}
	else if (input == 2)
	{
		std::cout << "Byebye";
	}
}

void SchoolSystem::AddStudent(std::string name, int age)
{
	Student student;
	student.name = name;
	student.age = age;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{
}
