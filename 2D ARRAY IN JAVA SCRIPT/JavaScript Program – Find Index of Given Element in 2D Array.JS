// Take number of rows and columns
let rows = parseInt(prompt("Enter number of rows:"));
let cols = parseInt(prompt("Enter number of columns:"));

// Declare 2D array
let matrix = [];

// Input elements
for (let i = 0; i < rows; i++) {
    matrix[i] = [];
    for (let j = 0; j < cols; j++) {
        matrix[i][j] = parseInt(prompt(`Enter element at [${i}][${j}]:`));
    }
}

// Input the element to search
let target = parseInt(prompt("Enter the element to search:"));

let found = false;

// Search for the target element
for (let i = 0; i < rows; i++) {
    for (let j = 0; j < cols; j++) {
        if (matrix[i][j] === target) {
            console.log(`Element found at index [${i}][${j}]`);
            found = true;
        }
    }
}

// If element not found
if (!found) {
    console.log("Element not found in the matrix");
}
