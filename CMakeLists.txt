# CMakeList.txt: проект CMake для Task33; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
cmake_minimum_required (VERSION 3.8)

project ("Task33")
set(JSON_BuildTests OFF CACHE INTERNAL "") 
# Добавьте источник в исполняемый файл этого проекта.
add_subdirectory(nlohmann_json)
add_executable (Task33 "Task33.cpp" "Task33.h")

target_link_libraries(Task33 PRIVATE nlohmann_json::nlohmann_json)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
