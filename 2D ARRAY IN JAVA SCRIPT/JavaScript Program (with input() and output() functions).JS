// Function to take input in a 2D matrix
function input(rows, cols) {
    let matrix = [];

    for (let i = 0; i < rows; i++) {
        matrix[i] = [];
        for (let j = 0; j < cols; j++) {
            matrix[i][j] = parseInt(prompt(`Enter element for [${i}][${j}]:`));
        }
    }
    return matrix;
}

// Function to print (output) the matrix
function output(matrix) {
    console.log("The Matrix is:");
    for (let i = 0; i < matrix.length; i++) {
        console.log(matrix[i].join(" "));
    }
}

// Take row and column input from user
let rows = parseInt(prompt("Enter number of rows:"));
let cols = parseInt(prompt("Enter number of columns:"));

// Call input() function
let matrix = input(rows, cols);

// Call output() function
output(matrix);
