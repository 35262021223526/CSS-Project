let arr = [];
let n = 5; // number of elements

// Taking array input from the user
for (let i = 0; i < n; i++) {
    let value = Number(prompt("Enter number " + (i + 1) + ":"));
    arr.push(value);
}

// Initialize largest and smallest
let largest = arr[0];
let smallest = arr[0];

// Finding largest and smallest elements
for (let i = 1; i < arr.length; i++) {
    if (arr[i] > largest) {
        largest = arr[i];
    }
    if (arr[i] < smallest) {
        smallest = arr[i];
    }
}

// Printing the results
console.log("Largest element = " + largest);
console.log("Smallest element = " + smallest);
