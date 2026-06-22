#include "Todolist.hpp"
#include "Todo.hpp"
#include "header.hpp"
#include <fstream>

std::vector<Todo>& TodoList::getList()
{
	return this->list;
}

void	TodoList::addTask(const Todo& task)
{
	this->list.push_back(task);
	this->insertTaskInJson(task);
}

void	TodoList::removeTask(const Todo& task)
{
	list.erase(list.begin() + task.getId());
	this->removeTaskInJson(task);
}

Todo&	TodoList::findTaskWithId(int id)
{
	return (list.at(id));
}

void	TodoList::updateDbFile()
{
	std::fstream fs(this->db_file, std::ios::out);
	fs << this->db_task;
}

void	TodoList::removeTaskInJson(const Todo& task)
{
	this->db_task.erase(task.getId());
	this->updateDbFile();
}

void	TodoList::insertTaskInJson(const Todo& task)
{
	json new_task;
	new_task["id"] = task.getId();
	new_task["description"] = task.getDescription();
	new_task["done"] = task.isDone();
	new_task["priority"] = task.getPriority();
	this->db_task.push_back(new_task);
	this->updateDbFile();
}

std::ostream&	operator<<(std::ostream& stream, const TodoList& todos)
{
	for (size_t i = 0; i < todos.list.size(); i++)
	{
		stream << todos.list[i];
	}
	return (stream);
}
