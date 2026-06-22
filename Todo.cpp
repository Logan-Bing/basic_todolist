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

std::string Todo::getPriority() const
{
	std::string value;
	if (this->priority == 0)
		value = "LOW";
	else if (this->priority == 1)
		value = "MEDIUM";
	else
		value = "HIGH";
	return (value);
}

int		Todo::isDone() const
{
	return (this->completed);
}

const std::string&	Todo::getDescription() const
{
	return (this->description);
}

std::ostream& operator<< (std::ostream& stream, const Todo& todo)
{
	std::string sym = todo.isDone()? "[X]" : "[ ]";

	stream 
		<< sym << " "
		<< "id: " << todo.getId()<< " - "
		<< "description: " << todo.getDescription() << " "
		<< std::endl;

	return (stream);
}
