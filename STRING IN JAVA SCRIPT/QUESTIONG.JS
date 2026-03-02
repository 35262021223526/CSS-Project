let str = prompt("Enter a string:");

// Method 1: Using a loop to count characters
let count = 0;
for (let i = 0; i < str.length; i++) {
    count++;
}

// Method 2: Using built-in length property
let builtInLength = str.length;

document.write("Length using loop: " + count + "<br>");
document.write("Length using built-in function: " + builtInLength);
