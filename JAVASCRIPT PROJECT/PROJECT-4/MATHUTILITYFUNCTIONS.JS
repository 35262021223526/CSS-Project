// Math Utility Functions

// Addition
function add(a = 0, b = 0) {
    return a + b;
}

// Subtraction
function subtract(a = 0, b = 0) {
    return a - b;
}

// Multiplication
function multiply(a = 1, b = 1) {
    return a * b;
}

// Division (with safety check)
function divide(a = 1, b = 1) {
    if (b === 0) {
        return "Error: Cannot divide by zero!";
    }
    return a / b;
}

// Testing the functions
console.log("Add: ", add(10, 5));
console.log("Subtract: ", subtract(10, 5));
console.log("Multiply: ", multiply(10, 5));
console.log("Divide: ", divide(10, 5));
