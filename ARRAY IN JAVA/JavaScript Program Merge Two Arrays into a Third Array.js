let arr1 = [];
let arr2 = [];
let n1 = 3; // number of elements in first array
let n2 = 3; // number of elements in second array

// Taking input for first array
for (let i = 0; i < n1; i++) {
    let value = prompt("Enter value " + (i + 1) + " for Array 1:");
    arr1.push(value);
}

// Taking input for second array
for (let i = 0; i < n2; i++) {
    let value = prompt("Enter value " + (i + 1) + " for Array 2:");
    arr2.push(value);
}

// Merging arrays
let mergedArray = arr1.concat(arr2);

// Printing merged array
console.log("Merged Array:", mergedArray);
