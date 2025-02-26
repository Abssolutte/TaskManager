#include <iostream>
#include <string>
#include "TaskManager.h"

int main() {
    TaskManager manager;
    int option; 
    std::string task;

    do {
        std::cout << "\nTask Manager\n";
        std::cout << "\nAdd Task\n";
        std::cout << "\nRemove Task\n";
        std::cout << "\nComplete Task\n";
        std::cout << "\nList Task\n";
        std::cout << "\nExit\n";
        std::cout << "\nChoose an option: ";
        std::cin >> option;
        std::cin.ignore(); 

        switch (option) {
            case 1:
            std::cout << "Enter a title for the task";
            std::getLine(std::cin, task);
            manager.addTask(task);
            break;
            

            case 2:
            std::cout << "Enter the index of the task to remove: ";
            int indexToRemove;
            std::cin >> indexToRemove;
            manager.removeTask(indexToRemove - 1);
            break;

            case 3:
            std::cout << "Enter the index of the task to complete: ";
            int indexToComplete;
            std::cin >> indexToComplete;
            manager.completeTask(indexToComplete - 1);
            break;

            case 4:
            manager.listTask();
            break; 

            case 5:
            std::cout << "Exiting program...\n";
            break;

            default:
            std::cout << "Invalid option try again\n";
        }
    } while (option != 5);

    return 0;
}