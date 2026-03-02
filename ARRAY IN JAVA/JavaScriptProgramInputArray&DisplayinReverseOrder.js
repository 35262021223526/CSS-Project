let arr = [];

// Taking 5 inputs from the user
for (let i = 0; i < 5; i++) {
    let value = prompt("Enter value " + (i + 1) + ":");
    arr.push(value);
}

// Display array in reverse order
console.log("Array elements in reverse order:");
for (let i = arr.length - 1; i >= 0; i--) {
    console.log(arr[i]);
}
