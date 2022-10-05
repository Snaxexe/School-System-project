#include "SchoolSystem.h"
#include "Student.h"
#include <string>
void SchoolSystem::Run()
{
	while (true)
	{
		//Prints out start menu
		std::cout << "School System" << "\n" << "To add a student, Press: 1" << "\n" << "To delete a student, Press: 2" << "\n" << "To search student, Press: 3" << "\n" << "To change a students class, Press: 4 \n\n";

		//int to take the input to know where to go from the start menu
		int input;
		std::cin >> input;

		//if option one is chosen you get to add a new student into the "Students" vector
		if (input == 1)
		{
			std::string name = "";
			int age = 0;
			std::string klass = "";

			std::cout << "Write the students name: " << "\n";
			std::cin >> name;
			
			std::cout << "Now write the students age: " << "\n";
			std::cin >> age;

			std::cout << "Now write the students class: " << "\n";
			std::cin >> klass;

			AddStudent(name, age, klass);
			
			//Prints out the students information
			for (auto i : students)
			{
				std::cout << i.name << "\n";
				std::cout << i.age << "\n";
				std::cout << i.klass << "\n\n";
			}
		}

		//in progress
		else if (input == 2)
		{
			RemoveStudent();
		}

		//Searches and prints a students information
		else if (input == 3)
		{
			std::cout << "Search for a student" << "\n";
			
			std::string input;
			std::cin >> input;

			for (auto i : students)
			{
				if (input==i.name)
				{
					std::cout << "\n" << i.name << "\n" << i.age << "\n" << i.klass << "\n\n";
				}
			}
		}

		//Change a students class
		else if (input == 4)
		{
			std::cout << "Search a students name: \n";

			std::string input;
			std::cin >> input;

			std::cout << "Wright students new class \n";

			std::string newerklass;
			std::cin >> newerklass;

			for (auto&i : students)
			{
				if (input == i.name)
				{
					i.klass = newerklass;
				}
			}
		}
	}
}
//Add student function
void SchoolSystem::AddStudent(std::string name, int age, std::string klass)
{
	Student student;
	student.name = name;
	student.age = age;
	student.klass = klass;
	students.push_back(student);

}

void SchoolSystem::RemoveStudent()
{
	std::cout << "Type the name of a student to remove:" << "\n";

	std::string input;
	std::cin >> input;

	for (auto&i : students)
	{
		if (input == i.name)
		{
			i.name = "removed";
			std::cout << "\n" << i.name;
		}
	}
}
