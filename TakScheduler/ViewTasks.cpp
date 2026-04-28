#include "viewTasks.h"
#include <iostream>
#include <vector>
#include <string>

// Passing the vector by reference (&) is efficient because 
// it avoids making a full copy of the task list.
// Change 'String& test' to 'const std::vector<std::string>& tasks'
void viewTasks(const std::vector<std::string>& tasks) {
    std::cout << "\n--- Your Current Tasks ---" << '\n';

    if (tasks.empty()) {
        std::cout << "No tasks found. Your schedule is clear!" << '\n';
        return;
    }

    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i] << '\n';
    }
    std::cout << "--------------------------" << '\n';
}
