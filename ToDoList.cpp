#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to add a task to the list
void addTask(vector<string> &tasks, vector<bool> &status) {
    string desc;
    cout << "Enter the task description: ";
    cin.ignore();
    getline(cin, desc);
    tasks.push_back(desc);
    status.push_back(false);
    cout << "Task added successfully.\n";
}

// Function to view all tasks
void viewTasks(const vector<string> &tasks, const vector<bool> &status) {
    cout << "To-Do List:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << (status[i] ? "[Completed] " : "[Pending] ") << tasks[i] << "\n";
    }
}

// Function to mark a task as completed
void markTaskCompleted(vector<bool> &status) {
    int index;
    cout << "Enter the task number to mark as completed: ";
    cin >> index;
    if (index > 0 && index <= status.size()) {
        status[index - 1] = true;
        cout << "Task marked as completed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

// Function to remove a task from the list
void removeTask(vector<string> &tasks, vector<bool> &status) {
    int index;
    cout << "Enter the task number to remove: ";
    cin >> index;
    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + (index - 1));
        status.erase(status.begin() + (index - 1));
        cout << "Task removed successfully.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {
    vector<string> tasks;
    vector<bool> status;
    int choice;

    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks, status);
                break;
            case 2:
                viewTasks(tasks, status);
                break;
            case 3:
                markTaskCompleted(status);
                break;
            case 4:
                removeTask(tasks, status);
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
