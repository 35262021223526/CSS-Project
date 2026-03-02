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

// Step 1: Flatten matrix into a single array
let flat = [];
for (let i = 0; i < rows; i++) {
    for (let j = 0; j < cols; j++) {
        flat.push(matrix[i][j]);
    }
}

// Step 2: Sort the flat array in descending order
flat.sort((a, b) => b - a);

// Step 3: Put sorted values back into matrix
let index = 0;
for (let i = 0; i < rows; i++) {
    for (let j = 0; j < cols; j++) {
        matrix[i][j] = flat[index++];
    }
}

// Print sorted matrix
console.log("Matrix in Descending Order:");
for (let i = 0; i < rows; i++) {
    console.log(matrix[i].join(" "));
}
