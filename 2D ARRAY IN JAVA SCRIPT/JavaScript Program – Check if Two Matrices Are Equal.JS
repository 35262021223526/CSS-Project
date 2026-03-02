// Function to take input for a matrix
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

// Function to check if two matrices are equal
function areEqual(mat1, mat2) {
    let rows = mat1.length;
    let cols = mat1[0].length;

    for (let i = 0; i < rows; i++) {
        for (let j = 0; j < cols; j++) {
            if (mat1[i][j] !== mat2[i][j]) {
                return false; // mismatch found
            }
        }
    }
    return true;
}

// Take rows and columns
let rows = parseInt(prompt("Enter number of rows:"));
let cols = parseInt(prompt("Enter number of columns:"));

// Input Matrix 1
console.log("Enter Matrix 1:");
let matrix1 = inputMatrix(rows, cols);

// Input Matrix 2
console.log("Enter Matrix 2:");
let matrix2 = inputMatrix(rows, cols);

// Check equality
if (areEqual(matrix1, matrix2)) {
    console.log("Both matrices are EQUAL");
} else {
    console.log("Matrices are NOT EQUAL");
}
