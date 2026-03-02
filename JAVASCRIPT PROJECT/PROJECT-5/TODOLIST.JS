// To-Do List (Console Version)

// Array to store tasks
let tasks = [];

// Function to add a task
function addTask(task) {
    tasks.push(task);
    console.log(`Task added: "${task}"`);
}

// Function to view all tasks
function viewTasks() {
    console.log("----- Your Tasks -----");
    if (tasks.length === 0) {
        console.log("No tasks available.");
        return;
    }

    tasks.forEach((task, index) => {
        console.log(`${index + 1}. ${task}`);
    });
}

// Function to delete a task by index
function deleteTask(index) {
    if (index < 1 || index > tasks.length) {
        console.log("Invalid task number!");
        return;
    }
    let removed = tasks.splice(index - 1, 1);
    console.log(`Task deleted: "${removed}"`);
}

// Example usage
addTask("Study JavaScript");
addTask("Complete homework");
addTask("Go for a walk");

viewTasks();

deleteTask(2);

viewTasks();
