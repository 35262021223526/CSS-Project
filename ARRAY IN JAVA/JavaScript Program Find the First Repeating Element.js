let arr = [];
let n = 5; // number of elements

// Taking input from user
for (let i = 0; i < n; i++) {
    arr.push(Number(prompt("Enter number " + (i + 1) + ":")));
}

let firstRepeating = -1;

for (let i = 0; i < arr.length; i++) {
    for (let j = i + 1; j < arr.length; j++) {
        if (arr[i] === arr[j]) {
            firstRepeating = arr[i];
            break;
        }
    }
    if (firstRepeating !== -1) break;
}

// Display result
if (firstRepeating !== -1) {
    console.log("First repeating element is: " + firstRepeating);
} else {
    console.log("No repeating element found.");
}
