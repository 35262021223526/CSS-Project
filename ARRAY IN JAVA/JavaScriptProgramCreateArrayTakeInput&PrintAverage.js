let arr = [];
let sum = 0;

// Taking 5 inputs from the user
for (let i = 0; i < 5; i++) {
    let value = Number(prompt("Enter number " + (i + 1) + ":"));
    arr.push(value);
    sum += value;   // Add each number
}

// Calculate average
let average = sum / arr.length;

// Print average
console.log("The average of the array elements is: " + average);
