let arr = [];
let n = 5; // Number of elements to take from the user

// Taking input from the user
for (let i = 0; i < n; i++) {
    let value = Number(prompt("Enter number " + (i + 1) + ":"));
    arr.push(value);
}

// Sorting in descending order (manual sorting)
for (let i = 0; i < arr.length; i++) {
    for (let j = i + 1; j < arr.length; j++) {
        if (arr[i] < arr[j]) {
            // Swap values
            let temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

// Displaying the result
console.log("Array in Descending Order: " + arr);
