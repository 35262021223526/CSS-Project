// Take number of rows from user
let rows = parseInt(prompt("Enter number of rows: "));

// Take number of columns from user
let cols = parseInt(prompt("Enter number of columns: "));

// Create an empty matrix
let matrix = [];

// Input elements from user
for (let i = 0; i < rows; i++) {
    matrix[i] = [];
    for (let j = 0; j < cols; j++) {
        matrix[i][j] = parseInt(prompt(`Enter element for position [${i}][${j}]:`));
    }
}

// Print the matrix
console.log("The Matrix is:");
for (let i = 0; i < rows; i++) {
    let rowString = "";
    for (let j = 0; j < cols; j++) {
        rowString += matrix[i][j] + " ";
    }
    console.log(rowString);
}
