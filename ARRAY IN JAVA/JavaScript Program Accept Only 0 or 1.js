let arr = [];
let n = 5;  // number of inputs

for (let i = 0; i < n; i++) {
    let value = Number(prompt("Enter 0 or 1 (Input " + (i + 1) + "):"));

    if (value === 0 || value === 1) {
        arr.push(value);
    } else {
        console.log("Invalid input! Only 0 or 1 allowed. Value not stored.");
        i--; // retry the same index
    }
}

console.log("Final array:", arr);
