let arr = [];
let n = 5; // number of elements

// Taking input from the user
for (let i = 0; i < n; i++) {
    arr.push(Number(prompt("Enter number " + (i + 1) + ":")));
}

// Reversing the array
let reversedArr = [];

for (let i = arr.length - 1; i >= 0; i--) {
    reversedArr.push(arr[i]);
}

// Displaying the reversed array
console.log("Original Array: " + arr);
console.log("Reversed Array: " + reversedArr);
