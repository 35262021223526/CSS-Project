let arr = [];
let sumEven = 0;
let sumOdd = 0;
let n = 5; // Number of elements to input

// Taking input from user
for (let i = 0; i < n; i++) {
    let value = Number(prompt("Enter number " + (i + 1) + ":"));
    arr.push(value);

    if (value % 2 === 0) {
        sumEven += value;
    } else {
        sumOdd += value;
    }
}

// Printing the results
console.log("Sum of even numbers = " + sumEven);
console.log("Sum of odd numbers = " + sumOdd);
