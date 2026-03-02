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

// Create transpose matrix (cols x rows)
let transpose = [];
for (let i = 0; i < cols; i++) {
    transpose[i] = [];
    for (let j = 0; j < rows; j++) {
        transpose[i][j] = matrix[j][i]; // interchange rows & columns
    }
}

// Print original matrix
console.log("Original Matrix:");
for (let i = 0; i < rows; i++) {
    console.log(matrix[i].join(" "));
}

// Print transpose matrix
console.log("Transpose Matrix:");
for (let i = 0; i < cols; i++) {
    console.log(transpose[i].join(" "));
}
