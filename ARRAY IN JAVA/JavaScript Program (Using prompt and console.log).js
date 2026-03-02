let arr = [];

for (let i = 0; i < 5; i++) {
    let value = prompt("Enter number " + (i + 1) + ":");
    arr.push(Number(value));
}

console.log("The elements of the array are:");
for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
}
