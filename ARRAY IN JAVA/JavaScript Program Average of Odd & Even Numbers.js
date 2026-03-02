let arr = [];
let sumOdd = 0, sumEven = 0;
let countOdd = 0, countEven = 0;

// Taking 5 inputs from the user
for (let i = 0; i < 5; i++) {
    let value = Number(prompt("Enter number " + (i + 1) + ":"));
    arr.push(value);

    if (value % 2 === 0) {
        sumEven += value;
        countEven++;
    } else {
        sumOdd += value;
        countOdd++;
    }
}

// Calculate averages
let avgOdd = countOdd > 0 ? sumOdd / countOdd : 0;
let avgEven = countEven > 0 ? sumEven / countEven : 0;

// Print results
console.log("Average of odd numbers: " + avgOdd);
console.log("Average of even numbers: " + avgEven);
