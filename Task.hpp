#ifndef TASK_HPP
#define TASK_HPP

#include "header.hpp"

class Task
{
	private:
		// Attributs
		string	description;
		int		id;
		bool	completed;

	public:
		Task(int, string, bool);
		friend std::ostream& operator<< (std::ostream& stream, const Task& task);
		void	say_hello();
		// Task(int, string, bool);

		// Methods
		// markDone();
		// markUndone();

		// getter
		// getId();
		// getDescription();
		// isDone();
};

#endif
