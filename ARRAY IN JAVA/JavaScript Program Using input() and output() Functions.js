let arr = [];

function input() {
    for (let i = 0; i < 5; i++) {
        let value = prompt("Enter value " + (i + 1) + ":");
        arr.push(value);
    }
}

function output() {
    console.log("The elements of the array are:");
    for (let i = 0; i < arr.length; i++) {
        console.log(arr[i]);
    }
}

// Calling the functions
input();
output();
