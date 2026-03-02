// Take number of rows and columns
let rows = parseInt(prompt("Enter number of rows:"));
let cols = parseInt(prompt("Enter number of columns:"));

// Declare 2D array
let matrix = [];

// Input elements into matrix
for (let i = 0; i < rows; i++) {
    matrix[i] = [];
    for (let j = 0; j < cols; j++) {
        matrix[i][j] = parseInt(prompt(`Enter element at [${i}][${j}]:`));
    }
}

// Take the number to search
let num = parseInt(prompt("Enter number to search in matrix:"));

let found = false;

// Search for the number
for (let i = 0; i < rows; i++) {
    for (let j = 0; j < cols; j++) {
        if (matrix[i][j] === num) {
            found = true;
            break;
        }
    }
    if (found) break;
}

// Print result
if (found) {
    console.log(num + " is PRESENT in the matrix");
} else {
    console.log(num + " is NOT PRESENT in the matrix");
}
