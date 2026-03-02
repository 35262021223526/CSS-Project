// Take number of rows and columns
let rows = parseInt(prompt("Enter number of rows:"));
let cols = parseInt(prompt("Enter number of columns:"));

// Declare 2D array
let matrix = [];

// Input matrix elements
for (let i = 0; i < rows; i++) {
    matrix[i] = [];
    for (let j = 0; j < cols; j++) {
        matrix[i][j] = parseInt(prompt(`Enter element at [${i}][${j}]:`));
    }
}

// Take the number to count
let num = parseInt(prompt("Enter the number to count:"));

let count = 0;

// Count occurrences
for (let i = 0; i < rows; i++) {
    for (let j = 0; j < cols; j++) {
        if (matrix[i][j] === num) {
            count++;
        }
    }
}

// Print result
console.log(`The number ${num} appears ${count} time(s) in the matrix.`);
