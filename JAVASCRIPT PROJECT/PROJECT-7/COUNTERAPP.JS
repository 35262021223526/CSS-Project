// Student Report Card using Objects + Methods

// Student object
const student = {
    name: "Vinayam Shaurya",
    class: "10th Grade",

    // Marks stored inside an object
    marks: {
        math: 88,
        science: 92,
        english: 79,
        computer: 95
    },

    // Method to calculate average and grade
    calculateGrade() {
        const { math, science, english, computer } = this.marks;  // object destructuring

        let total = math + science + english + computer;
        let average = total / 4;

        if (average >= 90) return "A+";
        else if (average >= 75) return "A";
        else if (average >= 60) return "B";
        else if (average >= 40) return "C";
        else return "Fail";
    }
};

// Display result
console.log("----- Student Report Card -----");
console.log("Name:", student.name);
console.log("Class:", student.class);
console.log("Marks:", student.marks);
console.log("Grade:", student.calculateGrade());
