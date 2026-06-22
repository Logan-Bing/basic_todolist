#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include "header.hpp"
#include "Todo.hpp"
#include <vector>


class TodoList
{
	private:
		std::vector<Todo> list;
		std::string db_file = DB_TASK;
		json db_task;

	public:
		void	addTask(const Todo&);
		void	removeTask(const Todo&);
		void	display();
		void	updateDbFile();
		void	insertTaskInJson(const Todo&);
		void	removeTaskInJson(const Todo&);
		std::vector<Todo>& getList();
		Todo&	findTaskWithId(int id);

		friend std::ostream&	operator<<(std::ostream&, const TodoList&);
		// void	saveWholeList();
};


#endif
