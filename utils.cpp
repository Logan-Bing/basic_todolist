#include "header.hpp"

void	get_priority(std::string& val, Priority priority)
{
	switch ((int)priority)
	{
		case 0:
			val = "LOW";
			break;
		case 1:
			val = "MEDIUM";
			break;
		case 2:
			val = "HIGH";
			break;
	}
}
