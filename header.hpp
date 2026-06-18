#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <vector>
#include <fstream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/screen/screen.hpp>
#include <nlohmann/json.hpp>


using json = nlohmann::json;
using namespace ftxui;

#define DEBUG 0
#define DB_TASK "task.json" 


enum Priority
{
	LOW,
	MEDIUM,
	HIGH,
};

void	get_priority(std::string& val, Priority priority);

#endif
