#include "ftxui/dom/elements.hpp"
#include "header.hpp"

#include "Todolist.hpp"
#include <string>

using json = nlohmann::json;

int main()
{
	TodoList l1;

	l1.addTask(Todo("Apprendre le c++", 1, HIGH));
	l1.addTask(Todo("Apprendre le hpc", 0, LOW));
	l1.addTask(Todo("Apprendre les maths ", 1, MEDIUM));
	l1.addTask(Todo("Apprendre les maths ", 1, MEDIUM));

	system("clear");


	return (0);
}
