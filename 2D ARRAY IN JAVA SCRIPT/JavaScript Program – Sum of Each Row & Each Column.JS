// Take number of rows and columns
let rows = parseInt(prompt("Enter number of rows:"));
let cols = parseInt(prompt("Enter number of columns:"));

// Declare 2D array
let matrix = [];

// Input elements in the matrix
for (let i = 0; i < rows; i++) {
    matrix[i] = [];
    for (let j = 0; j < cols; j++) {
        matrix[i][j] = parseInt(prompt(`Enter element at [${i}][${j}]:`));
    }
}

// Calculate and print row sums
console.log("Sum of each row:");
for (let i = 0; i < rows; i++) {
    let rowSum = 0;
    for (let j = 0; j < cols; j++) {
        rowSum += matrix[i][j];
    }
    console.log(`Row ${i} sum = ${rowSum}`);
}

// Calculate and print column sums
console.log("Sum of each column:");
for (let j = 0; j < cols; j++) {
    let colSum = 0;
    for (let i = 0; i < rows; i++) {
        colSum += matrix[i][j];
    }
    console.log(`Column ${j} sum = ${colSum}`);
}
