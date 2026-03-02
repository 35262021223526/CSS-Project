let arr = [];
let sum = 0;

// Taking 5 inputs from the user
for (let i = 0; i < 5; i++) {
    let value = Number(prompt("Enter number " + (i + 1) + ":"));
    arr.push(value);
    sum += value;  // Add each number to sum
}

// Printing the sum
console.log("The sum of the array elements is: " + sum);
