#include <iostream>
#include <string>
#include <vector>
#include "viewTasks.h"
#include "EditTask.h"
#include <string_view>

int main() {
    int choice = 0;
    std::vector<std::string> taskList;

    std::cout << "Welcome To the Task Scheduler!\n";

    do {
        std::cout << "\n1. View all Tasks\n";
        std::cout << "2. Edit Tasks\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                viewTasks(taskList);
                break;
            case 2:
                EditTasksOptions(taskList);  // fixed: pass taskList
                break;
            case 3:
                std::cout << "Exiting. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}