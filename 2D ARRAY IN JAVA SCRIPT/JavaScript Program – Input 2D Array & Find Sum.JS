// Take number of rows from user
let rows = parseInt(prompt("Enter number of rows:"));

// Take number of columns from user
let cols = parseInt(prompt("Enter number of columns:"));

// Declare 2D array
let matrix = [];
let sum = 0;

// Input elements in 2D array
for (let i = 0; i < rows; i++) {
    matrix[i] = [];
    for (let j = 0; j < cols; j++) {
        matrix[i][j] = parseInt(prompt(`Enter element at [${i}][${j}]:`));
        sum += matrix[i][j]; // add element to sum
    }
}

// Print the matrix
console.log("The Matrix is:");
for (let i = 0; i < rows; i++) {
    console.log(matrix[i].join(" "));
}

// Print the sum
console.log("Sum of all elements =", sum);
