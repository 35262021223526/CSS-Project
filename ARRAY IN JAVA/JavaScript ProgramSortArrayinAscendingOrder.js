let arr = [];
let n = 5; // number of elements

// Taking input from user
for (let i = 0; i < n; i++) {
    arr.push(Number(prompt("Enter number " + (i + 1) + ":")));
}

// Sorting in ascending order
for (let i = 0; i < arr.length; i++) {
    for (let j = i + 1; j < arr.length; j++) {
        if (arr[i] > arr[j]) {
            // Swap
            let temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

// Printing sorted array
console.log("Array in Ascending Order: " + arr);
