#include "EditTask.h"
#include <iostream>

void EditTasksOptions(std::vector<std::string>& taskList) {
    int choice;
    do {
        std::cout << "1. Add Task\n";
        std::cout << "2. Delete Task\n";
        std::cout << "3. Edit Task\n";
        std::cout << "4. Return to main menu\n";
        std::cout << "Edit Options: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string newTask;
                std::cout << "Enter task to add: ";
                std::cin.ignore();
                std::getline(std::cin, newTask);
                taskList.push_back(newTask);
                std::cout << "Task added!\n";
                break;
            }
            case 2: {
                std::cout << "Enter task number to delete: ";
                int index;
                std::cin >> index;
                if (index >= 1 && index <= (int)taskList.size()) {
                    taskList.erase(taskList.begin() + index - 1);
                    std::cout << "Task deleted!\n";
                } else {
                    std::cout << "Invalid task number.\n";
                }
                break;
            }
            case 3: {
                std::cout << "Enter task number to edit: ";
                int index;
                std::cin >> index;
                if (index >= 1 && index <= (int)taskList.size()) {
                    std::string updatedTask;
                    std::cout << "Enter new task description: ";
                    std::cin.ignore();
                    std::getline(std::cin, updatedTask);
                    taskList[index - 1] = updatedTask;
                    std::cout << "Task updated!\n";
                } else {
                    std::cout << "Invalid task number.\n";
                }
                break;
            }
            case 4:
                std::cout << "Returning to main menu...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
}