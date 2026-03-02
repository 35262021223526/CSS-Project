let str1 = prompt("Enter the first string:");
let str2 = prompt("Enter the second string:");

// ------------------------
// Method 1: Copy using loop
// ------------------------
let copiedUsingLoop = "";

for (let i = 0; i < str1.length; i++) {
    copiedUsingLoop += str1[i];
}

// ------------------------
// Method 2: Using built-in assignment (string function)
// ------------------------
let copiedUsingBuiltIn = str1;  // Simply assigning copies the string

document.write("Copied string using loop: " + copiedUsingLoop + "<br>");
document.write("Copied string using built-in method: " + copiedUsingBuiltIn);
