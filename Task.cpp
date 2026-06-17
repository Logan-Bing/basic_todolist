#include "Task.hpp"

Task::Task(int id, string description, bool completed)
{
	this->id = id;
	this->description = description;
	this->completed = completed;
}

void	Task::say_hello()
{
	cout << "hello" << endl;
}

std::ostream& operator<< (std::ostream& stream, const Task& task)
{
	stream 
		<< "id: " << task.id << " "
		<< "description: " << task.description << " "
		<< "completed: " << task.completed << " "
		<< endl;

	return (stream);
}
