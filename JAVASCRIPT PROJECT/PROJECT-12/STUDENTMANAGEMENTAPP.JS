// ----------------------------
// Student Management System
// JavaScript Only (CRUD)
// ----------------------------

// Array to store student records
let students = [];

// Function: Add New Student
function addStudent(name, phone, father, joining, course, branch, batch) {
    const student = {
        name,
        phone,
        father,
        joining,
        course,
        branch,
        batch
    };

    students.push(student);
    console.log("Student Added:", student);
}

// Function: View All Students
function viewStudents() {
    console.log("----- All Students -----");

    if (students.length === 0) {
        console.log("No student records found.");
        return;
    }

    students.forEach((stu, index) => {
        console.log(
            `${index + 1}. Name: ${stu.name}, Phone: ${stu.phone}, ` +
            `Father: ${stu.father}, Joining: ${stu.joining}, Course: ${stu.course}, ` +
            `Branch: ${stu.branch}, Batch: ${stu.batch}`
        );
    });
}

// Function: Update Student
function updateStudent(index, updatedData) {
    if (index < 0 || index >= students.length) {
        console.log("Invalid student index!");
        return;
    }

    students[index] = { ...students[index], ...updatedData };
    console.log("Student Updated:", students[index]);
}

// Function: Delete Student
function deleteStudent(index) {
    if (index < 0 || index >= students.length) {
        console.log("Invalid student index!");
        return;
    }

    const removed = students.splice(index, 1);
    console.log("Student Deleted:", removed[0]);
}

// ------------------------------------------
// Example Usage (You can test in Console)
// ------------------------------------------

// Adding Students
addStudent("Rahul", "9876543210", "Mr. Kumar", "2024-02-01", "BCA", "CS", "Morning");
addStudent("Anita", "9123456780", "Mr. Singh", "2024-02-05", "BBA", "Management", "Evening");

// View All
viewStudents();

// Update record (index 1)
updateStudent(1, { phone: "9999999999", course: "MBA" });

// View again
viewStudents();

// Delete record (index 0)
deleteStudent(0);

// Final view
viewStudents();
