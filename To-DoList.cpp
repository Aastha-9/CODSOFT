#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;
};
void displayMenu() {
    cout << "\nTo-Do List Manager\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Remove Task\n";
    cout << "5. Exit\n";
    cout << "Choose an option: \n";
}
void addTask(vector<Task>& tasks) {
    string description;
    cout << "Enter task to be added : ";
    cin.ignore();  
    getline(cin, description);
    Task newTask = {description, false};
    tasks.push_back(newTask);
    cout << "Task added successfully.\n";
}
void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks to show.\n";
    } else {
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].description;
            if (tasks[i].completed) {
                cout << " [Completed]";
            }
            cout << "\n";
        }
    }
}
void markTaskAsCompleted(vector<Task>& tasks) {
    int taskNumber;
    cout << "Enter task number to mark as completed: ";
    cin >> taskNumber;
    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number.\n";
    } else {
        tasks[taskNumber - 1].completed = true;
        cout << "Task marked as completed.\n";
    }
}
void removeTask(vector<Task>& tasks) {
    int taskNumber;
    cout << "Enter task number to remove: ";
    cin >> taskNumber;
    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number.\n";
    } else {
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task removed successfully.\n";
    }
}
int main() {
    vector<Task> tasks;
    int ch;
    while (true) {
        displayMenu();
        cin >> ch;
        switch (ch) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskAsCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    }
    return 0;
}
