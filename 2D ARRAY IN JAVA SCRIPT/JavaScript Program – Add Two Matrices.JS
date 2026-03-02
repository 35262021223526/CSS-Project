// Function to input a matrix
function inputMatrix(rows, cols) {
    let matrix = [];
    for (let i = 0; i < rows; i++) {
        matrix[i] = [];
        for (let j = 0; j < cols; j++) {
            matrix[i][j] = parseInt(prompt(`Enter element at [${i}][${j}]:`));
        }
    }
    return matrix;
}

// Take rows and columns
let rows = parseInt(prompt("Enter number of rows:"));
let cols = parseInt(prompt("Enter number of columns:"));

// Input Matrix A
console.log("Enter Matrix A:");
let A = inputMatrix(rows, cols);

// Input Matrix B
console.log("Enter Matrix B:");
let B = inputMatrix(rows, cols);

// Create result matrix
let C = [];

// Add matrices element-wise
for (let i = 0; i < rows; i++) {
    C[i] = [];
    for (let j = 0; j < cols; j++) {
        C[i][j] = A[i][j] + B[i][j];
    }
}

// Print result matrix
console.log("Resultant Matrix (A + B):");
for (let i = 0; i < rows; i++) {
    console.log(C[i].join(" "));
}
