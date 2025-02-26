#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <vector>
#include <string>
#include <iostream>

class Task {
    public: 
    std::string title;
    bool completed; 

    Task(std::string t) : title(t), completed(false) {}
    void complete() { completed = true; }
    void print() const {
        std::cout << (completed ? "[x] " : "[ ] ") << title << std::endl;
    }
};

class TaskManager {
    private: 
    std::vector<Task> tasks;

    public:
    void addTask(const std::string& task) {
        tasks.push_back(Task(task));
    }

    void removeTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
        } else {
            std::cout << "Invalid index" << std::endl;
        }
    }

    void completeTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].complete();
        } else {
            std::cout << "Invalid index" << std::endl;
        }
    }

    void listTask() const {
        if (tasks.size() == 0) {
            std::cout << "No tasks in list" << std::endl;
        } else {
            for (int i = 0; i < tasks.size(); i++) {
                std::cout << i << ". ";
                tasks[i].print();
            }
        }
    }
};

#endif 