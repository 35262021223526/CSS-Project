let arr = [];
let n = 5; // number of elements

// Taking array input from user
for (let i = 0; i < n; i++) {
    let value = Number(prompt("Enter number " + (i + 1) + ":"));
    arr.push(value);
}

// Taking number to search
let searchNum = Number(prompt("Enter the number to search:"));

let found = false;

// Searching in array
for (let i = 0; i < arr.length; i++) {
    if (arr[i] === searchNum) {
        found = true;
        break;
    }
}

// Display result
if (found) {
    console.log(searchNum + " is present in the array.");
} else {
    console.log(searchNum + " is NOT present in the array.");
}
