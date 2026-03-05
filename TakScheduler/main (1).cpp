#include <iostream>
#include <string>
#include "viewTasks.h"

/*
void EditTasksOptions(edittasks.cpp pointer value){
    int choice;
    std::cout << 1.Add Tasks << '\n';
    std::cout << 2.Delete Tasks << '\n';
    std::cout << 3.Edit Tasks << '\n';
    std::cout << 4.Return to main menu << '\n';
        
        do {
        std::cout << "Loan Options, options" << '\n';
        std::cin >> choice;
        
        switch (choice){
            case 1:
            
        }
}
*/


int main() {
    int choice = 0;
std::vector<std::string> taskList; // Your storage
    std::cout << "Welcome To the Task Scheduler!" << '\n';

    do {
        
        std::cout << "\n1. View all Tasks" << '\n';
        std::cout << "2. Edit Tasks" << '\n';
        std::cout << "3. Exit" << '\n';
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                std::cout << "Viewing all tasks...\n";
                viewTasks(taskList);
                break;
            case 2:
                std::cout << "Editing tasks...\n";
                // EditTasksOptions();
                // logic for editing tasks goes here
                // editTasks(TasksList);
                break;
            case 3:
                std::cout << "Exiting. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3); // The loop continues until the user hits 3

    return 0;
}