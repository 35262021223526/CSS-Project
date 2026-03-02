// Take number of rows from user
let rows = parseInt(prompt("Enter number of rows:"));

// Take number of columns from user
let cols = parseInt(prompt("Enter number of columns:"));

// Declare 2D array
let matrix = [];
let product = 1;

// Input elements in 2D array and calculate product
for (let i = 0; i < rows; i++) {
    matrix[i] = [];
    for (let j = 0; j < cols; j++) {
        matrix[i][j] = parseInt(prompt(`Enter element at [${i}][${j}]:`));
        product *= matrix[i][j]; // multiply element
    }
}

// Print the matrix
console.log("The Matrix is:");
for (let i = 0; i < rows; i++) {
    console.log(matrix[i].join(" "));
}

// Print the product
console.log("Product of all elements =", product);
