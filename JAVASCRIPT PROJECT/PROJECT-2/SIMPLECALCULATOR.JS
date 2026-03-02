// Simple Calculator (Operators + Conditions)

// Take two numbers as input
let num1 = Number(prompt("Enter first number:"));
let num2 = Number(prompt("Enter second number:"));
let operator = prompt("Enter operation (+, -, *, /):");

// Validate input numbers
if (isNaN(num1) || isNaN(num2)) {
    alert("Invalid input! Please enter valid numbers.");
} else {

    // Perform operations based on operator
    if (operator === "+") {
        alert("Result: " + (num1 + num2));
    } else if (operator === "-") {
        alert("Result: " + (num1 - num2));
    } else if (operator === "*") {
        alert("Result: " + (num1 * num2));
    } else if (operator === "/") {

        // Check division by zero
        if (num2 === 0) {
            alert("Error! Division by zero is not allowed.");
        } else {
            alert("Result: " + (num1 / num2));
        }

    } else {
        alert("Invalid operator! Please use +, -, *, or /");
    }

}
