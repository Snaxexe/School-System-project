#include "SchoolSystem.h"
#include <string>
void SchoolSystem::Run()
{
	//Prints out start menu
	std::cout << "School System" << "\n" << "To add a student, Press: 1" << "\n" << "To delete a student, Press: 2" << "\n";

	//int to take the input to know where to go from the start menu
	int input;
	std::cin >> input;

	//if option one is chosen you get to add a new student into the "Students" vector
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
	//in progress
	else if (input == 2)
	{
		std::cout << "Byebye";
	}
}

//Add student function
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
