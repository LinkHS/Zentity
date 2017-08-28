# Set the name and the supported language of the project
project(file_selection)

# Set the minimum version of cmake required to build this project
cmake_minimum_required(VERSION 2.6)

# Add an executable compiled from hello.c
add_executable(file_selection main.c)

# Link the target to the GTK+ libraries
# target_link_libraries(file_selection ${GTK3_LIBRARIES})