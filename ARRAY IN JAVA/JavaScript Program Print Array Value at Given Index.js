let arr = [];
let n = 5;  // number of array elements

// Taking array inputs
for (let i = 0; i < n; i++) {
    let value = prompt("Enter value " + (i + 1) + ":");
    arr.push(value);
}

// Taking index from user
let index = Number(prompt("Enter the index number (0 to " + (n - 1) + "):"));

// Checking valid index
if (index >= 0 && index < n) {
    console.log("Value at index " + index + " is: " + arr[index]);
} else {
    console.log("Invalid index!");
}
