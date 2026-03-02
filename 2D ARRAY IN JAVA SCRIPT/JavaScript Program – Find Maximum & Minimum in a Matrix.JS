// Take number of rows and columns
let rows = parseInt(prompt("Enter number of rows:"));
let cols = parseInt(prompt("Enter number of columns:"));

// Declare 2D array
let matrix = [];

// Initialize max and min
let max = Number.NEGATIVE_INFINITY;
let min = Number.POSITIVE_INFINITY;

// Input elements and update max/min
for (let i = 0; i < rows; i++) {
    matrix[i] = [];
    for (let j = 0; j < cols; j++) {
        matrix[i][j] = parseInt(prompt(`Enter element at [${i}][${j}]:`));

        if (matrix[i][j] > max) {
            max = matrix[i][j];
        }
        if (matrix[i][j] < min) {
            min = matrix[i][j];
        }
    }
}

// Print the matrix
console.log("The Matrix is:");
for (let i = 0; i < rows; i++) {
    console.log(matrix[i].join(" "));
}

// Print results
console.log("Maximum element in the matrix =", max);
console.log("Minimum element in the matrix =", min);
