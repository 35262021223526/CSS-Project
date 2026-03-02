// Function to input a matrix
function inputMatrix(rows, cols) {
    let matrix = [];
    for (let i = 0; i < rows; i++) {
        matrix[i] = [];
        for (let j = 0; j < cols; j++) {
            matrix[i][j] = parseInt(prompt(`Enter element [${i}][${j}]:`));
        }
    }
    return matrix;
}

// Input size of Matrix A
let r1 = parseInt(prompt("Enter number of rows for Matrix A:"));
let c1 = parseInt(prompt("Enter number of columns for Matrix A:"));

// Input size of Matrix B
let r2 = parseInt(prompt("Enter number of rows for Matrix B:"));
let c2 = parseInt(prompt("Enter number of columns for Matrix B:"));

// Check if multiplication is possible
if (c1 !== r2) {
    console.log("Matrix multiplication NOT possible!");
} else {
    
    // Input matrices
    console.log("Enter Matrix A:");
    let A = inputMatrix(r1, c1);

    console.log("Enter Matrix B:");
    let B = inputMatrix(r2, c2);

    // Create result matrix C
    let C = [];
    for (let i = 0; i < r1; i++) {
        C[i] = [];
        for (let j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (let i = 0; i < r1; i++) {
        for (let j = 0; j < c2; j++) {
            for (let k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    console.log("Resultant Matrix (A × B):");
    for (let i = 0; i < r1; i++) {
        console.log(C[i].join(" "));
    }
}
