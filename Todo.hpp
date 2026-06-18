#ifndef TASK_HPP
#define TASK_HPP

#include "header.hpp"
#include <ostream>

class Todo
{
	private:
		// Attributs
		std::string	description;
		Priority priority;
		int		id;
		bool	completed;

	public:
		Todo(const std::string&, bool, Priority);
		// friend std::ostream& operator<< (std::ostream& stream, const Task& task);
		// bool operator< (const todo::Task& rhs) const;

		// Methods
		void	markDone();
		void	markUndone();

		// getter
		int getId() const;
		int	getPriority() const;
		int	isDone() const;
		const std::string& getDescription() const;
};

#endif
