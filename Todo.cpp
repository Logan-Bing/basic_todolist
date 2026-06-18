#include "Todo.hpp"
#include "header.hpp"

int increment = 0;

Todo::Todo(const std::string& description, bool completed, Priority priority)
{
	if (DEBUG)
		std::cout << "Constructor called" << std::endl;

	this->id = increment++;
	this->description = description;
	this->completed = completed;
	this->priority = priority;
}

void	Todo::markDone()
{
	this->completed = 1;
}

void	Todo::markUndone()
{
	this->completed = 0;
}

int		Todo::getId() const
{
	return (this->id);
}

int		Todo::getPriority() const
{
	return (this->priority);
}

int		Todo::isDone() const
{
	return (this->completed);
}

const std::string&	Todo::getDescription() const
{
	return (this->description);
}

// bool	todo::Task::operator<(const Task& rhs) const
// {
// 	return (this->priority < rhs.priority);
// }
//
// std::ostream& operator<< (std::ostream& stream, const todo::Task& task)
// {
// 	std::string sym = task.isDone()? "[X]" : "[ ]";
//
// 	stream 
// 		<< sym << " "
// 		<< "id: " << task.getId()<< " - "
// 		<< "description: " << task.getDescription() << " "
// 		<< std::endl;
//
// 	return (stream);
// }
