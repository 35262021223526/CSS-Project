let arr = [];
let evenArr = [];
let oddArr = [];
let n = 5;  // number of elements

// Taking input from user
for (let i = 0; i < n; i++) {
    let value = Number(prompt("Enter number " + (i + 1) + ":"));
    arr.push(value);
}

// Separating even and odd numbers
for (let i = 0; i < arr.length; i++) {
    if (arr[i] % 2 === 0) {
        evenArr.push(arr[i]);
    } else {
        oddArr.push(arr[i]);
    }
}

// Printing results
console.log("Original Array:", arr);
console.log("Even Elements:", evenArr);
console.log("Odd Elements:", oddArr);
