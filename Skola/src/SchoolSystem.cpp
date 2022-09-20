#include "SchoolSystem.h"
#include "Student.h"
#include <string>
void SchoolSystem::Run()
{
	while (true)
	{
		//Prints out start menu
		std::cout << "School System" << "\n" << "To add a student, Press: 1" << "\n" << "To delete a student, Press: 2" << "\n" << "To search student, Press: 3" << "\n";
		std::cout << "click to continue";

		//std::cin.ignore('\n', 1);
		std::cin.get();

		//int to take the input to know where to go from the start menu
		int input;
		std::cin >> input;

		//if option one is chosen you get to add a new student into the "Students" vector
		if (input == 1)
		{
			system("CLS");
			std::string name = "";
			int age = 0;

			std::cout << "Write the students name: " << "\n";
			std::cin >> name;
			system("CLS");
			std::cout << "Now write the students age: " << "\n";
			std::cin >> age;
			system("CLS");

			AddStudent(name, age);

			for (auto i : students)
			{
				std::cout << i.name << "\n";
				std::cout << i.age << "\n\n";
				
			}
			system("CLS");
		}
		//in progress
		else if (input == 2)
		{
			system("CLS");
			std::cout << "Byebye";
		}
		//in progress
		else if (input == 3)
		{
			system("CLS");

			std::cout << "Sök på en elev" << "\n";
			
			std::vector<Student> students;
			std::string input;
			std::cin >> input;

			for (auto i : students)
			{
				if (input==i.name)
				{
					std::cout << i.name;
				}
			}
		}
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
