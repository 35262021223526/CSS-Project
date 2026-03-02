let arr = [];
let n = 5; // number of elements to input

// Taking array input from user
for (let i = 0; i < n; i++) {
    arr.push(Number(prompt("Enter number " + (i + 1) + ":")));
}

// Taking element to delete
let del = Number(prompt("Enter the element to delete:"));

let index = arr.indexOf(del);

// Checking if element exists
if (index !== -1) {
    arr.splice(index, 1);  // Remove 1 element at that index
    console.log("Element deleted successfully.");
} else {
    console.log("Element not found in array.");
}

// Displaying final array
console.log("Updated Array: " + arr);
