#include <iostream>
#include <vector>
#include "task.h"

int main() {
    std::vector<Task> tasks;
    tasks.push_back(Task("Faire les courses"));
    tasks.push_back(Task("Finir le rapport"));
    
    for (const Task& task : tasks) {
        std::cout << "Tâche : " << task.getDescription() << std::endl;
    }
    
    return 0;
}