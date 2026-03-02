// Take number of rows and columns
let rows = parseInt(prompt("Enter number of rows:"));
let cols = parseInt(prompt("Enter number of columns:"));

// Declare matrix
let matrix = [];

// Input matrix elements
for (let i = 0; i < rows; i++) {
    matrix[i] = [];
    for (let j = 0; j < cols; j++) {
        matrix[i][j] = parseInt(prompt(`Enter element at [${i}][${j}]:`));
    }
}

let seen = new Set();
let firstRepeating = null;

// Traverse matrix to find first repeating element
outerLoop:
for (let i = 0; i < rows; i++) {
    for (let j = 0; j < cols; j++) {

        if (seen.has(matrix[i][j])) {
            firstRepeating = matrix[i][j];
            break outerLoop;   // Stop when first repeat is found
        } else {
            seen.add(matrix[i][j]);
        }

    }
}

// Print result
if (firstRepeating !== null) {
    console.log("First repeating element =", firstRepeating);
} else {
    console.log("No repeating element in the matrix");
}
