cmake_minimum_required(VERSION 3.5)
project(TodoList LANGUAGES CXX)

find_package(nlohmann_json 3.12.0 REQUIRED)
find_package(ftxui REQUIRED)

add_executable(app 
	main.cpp
	Todo.cpp
	TodoList.cpp
	utils.cpp
)

target_link_libraries(app PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(app
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component
)
